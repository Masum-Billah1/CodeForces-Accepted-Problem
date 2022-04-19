#include<bits/stdc++.h>
using namespace std;
int b[5001];
int main(){
	int n,i,l=0,ln=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		b[a[i]]++;
	}
	for(i=1;i<=5000;i++){
		l = l+min(2,b[i]);
		if(b[i]>0)
			ln = max(i,ln);
	}
	if(b[ln]>1)
		l--;
	cout << l << endl;
	for(i=1;i<ln;i++){
		if(b[i]>0){
			b[i]--;
			cout << i <<" ";
		}
	}
	for(i=ln--;i>0;i--){
		if(b[i]>0)
			cout << i <<" ";
	}
}
