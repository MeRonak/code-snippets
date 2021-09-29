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