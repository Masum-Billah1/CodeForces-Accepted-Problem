#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cse,i;
	cin >> n >> cse;
	long long int a,b,c[n],d[n],s=0;
	for(i=0;i<n;i++){
		cin >> a >> b;
		c[i]=min(a*2,b);
		d[i]=min(a,b);
	}
	sort(c,c+n);
	sort(d,d+n);
	for(i=0;i<cse;i++){
		s = s+d[i];
	}
	for(i=cse;i<n;i++){
		s = s+c[i];
	}
	cout << s <<endl;
}
