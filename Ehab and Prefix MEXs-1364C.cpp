#define ll long long
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n+1]={0},c[n+1]={0},i,j=0;
	for(i=0;i<n+1;i++){
		b[i]=-1;
	}
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=n-1;i>=0;i--){
		if(c[a[i]] == 0){
			b[i+1] = a[i];
			c[a[i]] = 1;
		}
	}
	j = 0;
	for(i=0;i<n+1;i++){
		while(c[j]==1){
			j++;
		}
		if(b[i]==-1){
			b[i] = j;
			c[j] = 1;
		}
	}
	for(i=0;i<n;i++){
		cout << b[i]<<" ";
	}
}

