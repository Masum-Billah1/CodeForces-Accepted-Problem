#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,gcd,lcm,j;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	gcd = a[0]*a[1];	
	for(i=0;i<n;i++){
		for(j=i+1;j<n-1;j++){
			lcm = a*__gcd(a[i],a[j])*;
			gcd = __gcd(gcd,lcm);
		}
	}
	cout << gcd << endl;
}

