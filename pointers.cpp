// Pointers---------------

// #include<iostream>
// using namespace std;
// void swap(int* a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a = 2;
//     int b = 4;
//     swap(&a,&b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

// Bit Manipulation --------

#include<iostream>
using namespace std;

int getbit(int n, int place){
    return ((n & 1<<place)!=0);
}

int setbit(int n, int place){

    return (n | 1<<place );
}

int clearbit(int n, int place){
    return (n & ~(1<<place));
}

int updatebit(int n , int place){
    int a = n & ~(1<<place);
    return (a|1<<place);
}

bool isPowerof2(int n){
    if(n==0){return false;}
    return !(n&n-1);
}

int numberofones(int n ){
    int count = 0 ;
    while(n!=0){
        n = n&n-1;
        count++;
    }
    return count;
}

void subset(int arr[], int size)
{
    for( int i = 0 ; i < 1<<size ; i++){
        for(int j =0 ; j< size ; j++){
            if(i & 1<<j){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}


void unique1(int arr[], int n){
    int xorsum = 0 ; 
    for(int i = 0 ; i < n ; i++){
        xorsum = xorsum^arr[i];
    }
    cout<<xorsum<<endl;
}
void unique2(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum^arr[i];
    }
    int count =0;
    while(getbit(xorsum,count)!=1){
        count++;
    }
    int newsum = 0;
    for(int i = 0 ; i< n ; i++){
        if(getbit(arr[i],count)){
            newsum = newsum^arr[i];
        }
    }
    cout<<(newsum^xorsum)<<endl;
    cout<<newsum<<endl;

}

void unique3(int arr[], int n){
    int ar[64] = {0};
   
    int count = 0;
    while(count<64){

        for(int i = 0; i<n ; i++){
            if(getbit(arr[i],count)){
                ar[count]++;
            }
        }
        count++;
        
       
        }
         int val = 0;
         int sum =0;
        for(int i = 0 ; i < n ; i++){
            arr[i] = arr[i]%3;
            if(arr[i]!=0){
                setbit(sum,val);
                val++;
            }
        }

        cout<<sum<<endl;
}
int main(){
    int n = 5;
    int place = 2;
    cout<<getbit(n,place)<<endl;
    cout<<setbit(n,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1)<<endl;
    cout<<isPowerof2(0)<<endl;
    cout<<numberofones(19)<<endl;
    int arr[4]= {1,2,3,4};
    int a[7]={1,2,3,4,1,2,3};
    // subset(arr,4);
    unique1(a,7);
    int newarr[] = {1,2,3,8,5,1,2,3};
    unique2(newarr, 8);
    int arra[] = {1,2,3,9,3,1,2,3,2,1};
    unique3(arra,10);
    return 0;
}