#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &v , int find){
	int lo = 0 , hi = v.size() -1 ;
	int mid;
	while(hi - lo>1){
		int mid = (lo+hi)/2;
		if(v[mid]<find){
			lo = mid+1 ;
		}
		else{
			hi = mid;
		}
	}
	if(v[lo] >= find){return lo;}
	else if(v[hi] >= find){return hi;}
	return -1;
}

int upper_bound(vector<int> &v ,int find){
	int lo = 0 , hi = v.size(),mid;
	while(hi- lo>1){
		int mid =(hi+lo)/2;
		if(v[mid]<=find){lo = mid+1;}
		else{hi = mid;}
	}
	if(v[lo]>find){return lo;}
	else if(v[hi]>find){return hi;}
	return -1;
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
	int city = upper_bound(v,66);
	cout<<city<<" "<<v[city]<<endl;

return 0 ; }