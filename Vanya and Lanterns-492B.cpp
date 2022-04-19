#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,l,d;
	cin >> n >> m;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	l = (a[0]-0)*2;
	for(i=1;i<n;i++){
		d = a[i]-a[i-1];
		if(d>l)
			l = d;
	}
	d = (m-a[n-1])*2;
	if(d>l)
		l = d;
	double s = l/2.0;
	printf("%0.10lf\n",s);
}//dedicated to Sumaiya Tasnim Fiha
