#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n ;++i){
		cin>>v[i];
	}
	int to_find;
	cin>>to_find;
	int lo = 0,hi = n-1 ,mid;
	while(hi-lo>1){
		mid = (hi+lo)/2;
		if(v[mid]>to_find){
			hi = mid-1;
		}
		else{
			lo = mid;
		}
	}
	if(to_find == v[lo]){cout<<lo<<endl;}
	else if(to_find == v[hi]){cout<<hi<<endl;}
	else{cout<<"not found "<<endl;}
return 0 ; }