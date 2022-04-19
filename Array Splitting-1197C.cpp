#define ll long long int
#define an 300000
#include<bits/stdc++.h>
int a[an],b[an-1];
using namespace std;
int main(){
	int n,k,i;
	cin >> n >> k;
	ll s = 0;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=1;i<n;i++){
		b[i-1] = a[i]-a[i-1]; 
		s = s+b[i-1];
	}
	sort(b,b+n-1);
	for(i=n-1;i>=n-k;i--){
		s-=b[i];
	}
	cout << s << endl;
}

