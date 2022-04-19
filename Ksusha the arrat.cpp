#include<bits/stdc++.h>
using namespace std;
int gcdis(int a,int b){
	int gcd = a;
	while(b%a!=0){
		gcd = b%a;
		b = a;
		a = gcd;
	}
	return gcd;
}
int main(){
	int n,i,gcd;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	if(n==1){
		cout << a[0]<<endl;
		return 0;
	}
	sort(a,a+n);
	gcd = gcdis(a[0],a[1]);
	for(i=2;i<n;i++){
		gcd = gcdis(gcd,a[i]);
	}
	if(gcd == a[0])
		cout << gcd <<endl;
	else
		cout <<-1 <<endl;
}
