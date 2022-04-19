#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll n,k,i,div=0;
	cin >> n >> k;
	vector<ll>v;
	for(i=1;i*i<=n;i++){
		if(i*i == n){
			div++;
			v.push_back(i);
		}
		else if(n%i == 0){
			v.push_back(i);
			v.push_back(n/i);
		}
	}
	sort(v.begin(),v.end());
	if(k > v.size()){
		cout << -1 <<endl;
		return 0;
	}
	cout << v[k-1];
	
}
