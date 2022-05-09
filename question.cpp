#include <bits/stdc++.h>
using namespace std;


int main(){
    long long n,m;
    cin>>n>>m;
    vector<long long> a(n,0);
    for(int i =0 ; i<n ; ++i){
        long long temp ;
        cin>>temp;
        temp = temp%m;
        a[i] = temp;
    }
    int q;
    cin>>q;
    while(q--){
        long long x;
        cin>>x;
        x = x%m;
        if(x==m-1){cout<<m-1<<endl;
        return 0;}
        for(int i =0 ; i<n ; ++i){
            a[i]+=x;
            a[i] = a[i]%m;
        }
        cout<<*max_element(a.begin(),a.end())<<endl;}
       
    return 0;
}