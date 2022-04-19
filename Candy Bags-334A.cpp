#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j=1,l=0;
	cin >> n;
	int k = n*n;
	for(i=0;i<n;i++){
		for(l=0;l<n/2;l++){
			cout << j<<" ";
			j++;
		}
		for(l=0;l<n/2;l++){
			cout << k <<" ";
			k--;
		}
		cout << endl;
	}
}
