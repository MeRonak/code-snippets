#include<iostream>
using namespace std;

// sum of numbers till n 
int sumofn( int n){
    if(n ==1 ){
        return 1;
    }
    return n+sumofn(n-1);
}
//  n ki power p 
int powerp(int n, int p){
    if(p==0){
        return 1;
    }
    return n*powerp( n, p-1);
}
// factorial of n 
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
// fibonacci number at n 
int fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
// check array sorted or not 
bool sortedArray( int arr[] , int n){
    if(n==1){
        return true;
    }
    bool rest = sortedArray(arr+1 , n -1);
    return (arr[0]<arr[1] && rest);
}
// print till n in decreasing order
void Printdec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    Printdec(n-1);
}
// print till n in increasing order
void printinc(int n){
    if(n==0){
        return;
    }
    printinc(n-1);    
    cout<<n<<endl;


}
// first occurence of a number in array 
int firstocc(int arr[], int n, int i, int key){
    if(i ==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
// last occurence of a number in a array 
int lastocc(int arr[], int n, int i, int key){
    if( i == n ){
        return -1;
    }
    int var = lastocc(arr,n,i+1,key);
    if(var!=-1){
        return var;
    }
    if(arr[i]==key){
        return i;
    }
}
// Reverse a string using recursion(one among the 7 best problem in recursion)
void reverse(string name, int n, int i ){

    if(i==n){
        return;
    }
    reverse(name,n, i+1);
    cout<<name[i];

}
// Function to replace pi with 3.14
void replacePI(string s, int i ){
    
    if(i==s.length()){
        return;
    }
    if(s[i]=='p' && s[i+1]=='i'){
        cout<<3.14;
        replacePI(s, i+2);
    }
    else{
        cout<<s[i];
        replacePI(s,i+1);
    }

}
// Remove duplicates from a string 
string duplicates(string s){
    if(s.length() ==0 ){
        return "";
    }
    char c = s[0];
    string ans = duplicates(s.substr(1));
    if(c == ans[0]){
        return ans;
    }
    else{
        return c+ans;
    }

}

// Moving all the x in array to the end 
string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveallX(s.substr(1));
    if(ch == 'x'){
        return ans+ch;
    }
    else return ch+ans;
}
int main(){
    int ans = sumofn(5);
    cout<<ans<<endl;
    
    cout<<powerp(15,5)<<endl;

    cout<<factorial(6)<<endl;

    cout<<fibonacci(7)<<endl;

    int arr[]= {1,3,5,9,5};
    cout<<sortedArray(arr,5)<<endl;

    Printdec(5);

    printinc(5);

    cout<<firstocc(arr,5,0,1)<<endl;
    
    cout<<lastocc(arr,5,0,5)<<endl;

    string name = "binod";
    reverse(name,name.length(),0);
    cout<<endl;
    string pi = "piahgsklhfapikahkdhapi";
    replacePI(pi,0);
    cout<<endl;
    string naam ="rroooooonaaaakkkkk";

    cout<<duplicates(naam)<<endl;


    string repeat = "xkldxhsdxxyoieaxx";
    cout<<moveallX(repeat)<<endl;
    return 0;
}