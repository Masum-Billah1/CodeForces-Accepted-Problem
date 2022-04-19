#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k,i;
	cin >> n >> k;
	long long int a,b,d[n];
	for(i=0;i<n;i++){
		cin >> a >> b;
		if(b > k)
			d[i] = a-b+k;
		else
			d[i] = a;
	}
	sort(d,d+n);
	cout << d[n-1]<<endl;
}
