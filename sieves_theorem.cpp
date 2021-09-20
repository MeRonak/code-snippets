#include<bits/stdc++.h>
using namespace std;
void is_prime(int n){
    vector<bool> v(n+1,true);
    for(int i =2 ; i<=n ; ++i){
        if(v[i]){
            cout<<i<<endl;
            for(int j = i*i; j<=n; j+=i){
               
                v[j]=false;
                
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    is_prime(n);
return 0;}
//sieve theorem to get all the prime number upto a given number in the
//time complexity of O(NloglogN).

*****************************************************************updated sieves code*************************************************************
 #include<bits/stdc++.h>
 using namespace std;

void isprime(){
    cout<<'2'<<endl;
    vector<bool> v(1e6,true);
    for(int i = 3 ;i<(int)1e6+1;++i){
        if(v[i]){
            cout<<i<<endl;
            for(int j = 1 ; j<=1e6 ; j+=i){
                v[i] = false;
            }
        }
    }
}

int main(){
    isprime();
return 0;}
