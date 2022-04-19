#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,even=0,odd=0,i;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]%2)
			odd=1;
		else
			even=1;
	}
	if(odd+even == 2){
		sort(a,a+n);
	}
	for(i=0;i<n;i++){
		cout <<a[i]<<" ";
	}
}
