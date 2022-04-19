#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin >> n;
	int a[n],b[3]={0},large=0;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		b[a[i]]++;
		if(a[i+1]!=a[i]){
			break;
		}
	}
	i++;
	for(;i<n;i++){
		b[a[i]]++;
		if(i+1<n)
			if(a[i+1]!=a[i]){
				large = max(large,min(b[1],b[2]));
				b[a[i+1]]=0;
			}
	}
	large = max(large,min(b[1],b[2]));
	cout << large*2<<endl;
}
