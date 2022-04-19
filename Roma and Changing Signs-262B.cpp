#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,small=100000,s=0;
	cin >> n >> k;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]<0 && k>0){
			a[i]=-a[i];
			k--;
		}
		if(a[i]<small){
			small = a[i];
		}
		s = s+a[i];
	}
	if(k%2){
		s = s-small*2;
	}
	cout << s <<endl;
}
