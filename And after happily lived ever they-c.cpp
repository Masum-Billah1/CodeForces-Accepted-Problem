#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,digit=0,s=0,a[6]={0},i;
	cin >> n;
	while(n){
		a[5-digit] = n%2;
		n/=2;  
		digit++;
	}
	s=a[0]*32+a[1]+a[2]*4+a[3]*8+a[4]*2+a[5]*16;
	cout << s <<endl;
}
