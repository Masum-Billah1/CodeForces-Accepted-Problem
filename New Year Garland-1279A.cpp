#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int test,t;
	cin >> test;
	while(test--){
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		t = ceil((a[0]+a[1]+a[2])/2.0);
		sort(a,a+3);
		if(a[2]<=t)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
		
	}
}
