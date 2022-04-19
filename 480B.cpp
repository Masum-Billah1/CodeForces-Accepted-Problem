#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cse,i;
	cin >> n >> cse;
	long long int a,b,c[n],d[n],s=0,j;
	for(i=0;i<n;i++){
		cin >> a >> b;
		c[i]=min(a*2,b);
		d[i]=min(a,b);
		c[i]=c[i]-d[i];
		s=s+d[i];
	} 
	sort(c,c+n);
	for(i=n-1,j=0;j<cse;i--,j++)
		s=s+c[i];
	cout << s <<endl;
}
//dedicated to Fiha
