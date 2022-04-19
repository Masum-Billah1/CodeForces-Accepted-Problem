#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,l=0,temp,in=0;
	cin >> n >> k;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
		if(i<k){
			l+=a[i];	
		}
	}
	temp = l;
	for(i=0;i<n-k;i++){
		l = l-a[i];
		l = l+a[k+i];
		if(l<temp){
			temp = l;
			in = i+1;
		}
	}
	cout << in+1 << endl;
}
