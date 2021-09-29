#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &a , int find){
	int lo = 0 , hi = a.size() -1 ;
	while(hi - lo>1){
		int mid = (lo+hi)/2;
		if(a[mid]<find){
			lo = mid+1 ;
		}
		else{
			hi = mid;
		}
	}
	if(lo >= find){return lo;}
	else if(hi >= find){return hi;}
	else{return -1;}

}
int main(){
	int n ;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i<n ;++i){
		cin>>v[i];
	}
	int to_find;
	cin>>to_find;
	int it = lower_bound(v , to_find);
	cout<<it<<" "<<v[it]<<endl;

return 0 ; }