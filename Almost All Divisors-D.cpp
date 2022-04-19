#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		ll n,i,num,mnm=1000000,mxm=0;
		cin >> n;
		vector<ll>a(n),b;
		for(i=0;i<n;i++){
			cin >> a[i];
			mnm = min(mnm,a[i]);
			mxm = max(mxm,a[i]);
		}
		sort(a.begin(),a.end());
		num = mnm*mxm;
		for(i=2;i<=sqrt(num);i++){
			if(i*i == num){
				b.push_back(i);
			}
			else if(num%i==0){
				b.push_back(i);
				b.push_back(num/i);
			}
		}
		sort(b.begin(),b.end());
		if(a == b)
			cout << num << endl;
		else
			cout << -1 << endl;
	}
}

