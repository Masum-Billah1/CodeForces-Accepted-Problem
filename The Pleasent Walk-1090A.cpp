#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,c=1,large=1;
	cin >> n >> k;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n-1;i++){
		if(a[i] == a[i+1]){
			if(large < c)
				large = c;
			c=1;
		}
		else{
			c++;
		}
	}
	if(c > large)
		large = c;
	cout << large << endl;
}
