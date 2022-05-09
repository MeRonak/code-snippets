#include<iostream>
using namespace std;
int mini(int a, int b){
    if(a>b){
        return b;

    }
    else return a;
}
int main()
{   
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
       cout<<(a^b)<<endl;
        
    }

    return 0;
}