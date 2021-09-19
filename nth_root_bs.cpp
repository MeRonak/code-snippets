#include<bits/stdc++.h>
using namespace std;
double eps = 1e-3; //here we can set the precision , precise upto the decimal digit

int main()
{
	double num;
	cin>>num;
	double n ;
	cin>>n;
	double hi= num ,lo=1,mid;

	while(hi-lo>eps){
		double mid = (hi+lo)/2.0;
		if(pow(mid,n)>num){
			hi = mid;
		}
		else{
			lo = mid;
		}
	}
	cout<<lo<<endl;


return 0;}
//time complexity of our code will be O(n.log(eps.num))