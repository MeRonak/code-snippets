#include<iostream>
#include<stack>
#include<map>
#include<unordered_map>
using namespace std;

unordered_map<char,int> data = {{'(',-1},{'[',-2},{'{',-3},{')',1},{']',2},{'}',3}};
string is_balanced(string n){
    stack<char> st;
    for(auto i : n){

        if(data[i]<0){st.push(i);}
        else{

            if(st.empty()){return "NO";}
            char temp = st.top();
            st.pop();
            if(data[i]+data[temp]!=0){return "NO";}

        }
    }
    if(st.empty()){return "YES";}
    return "NO";


}
int main(){

    int t ;
    cin>>t;
    while(t--){

        string n;
        cin>>n;
        cout<<is_balanced(n)<<endl;
    }
    return 0;
}