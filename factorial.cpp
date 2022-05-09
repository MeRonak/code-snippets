
#include<bits/stdc++.h>
using namespace std;
void printpara(string &s , int open , int close){
    if(open ==0 && close ==0 ){
        cout<<s<<endl;
    }
    if(open>0){
        s.push_back('(');
        printpara(s,open-1,close);
        s.pop_back();
    }
    if(close>0){
        if(close>open){
            s.push_back(')');
            printpara(s,open,close-1);
            s.pop_back();
        }
    }

}

int main(){
    int n;
    cin>>n;
    string s ="";
    printpara(s,n,n);
    return 0;
}