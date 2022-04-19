#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,x,t,r,d,s;
		cin >> n >> x >> t;
		d = t/x;
		if(d>=n){
			r = (n-1)*n/2;
		}
		else{
			s = d*(d-1)/2;
			r = d*(n-d);
			r = r+s;	
		}
		cout << r << endl;
	}
}
