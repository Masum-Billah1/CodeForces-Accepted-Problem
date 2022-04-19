#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i=1,j,k,t,c=0;
	cin >> n;
	int a[n][n];
	j = n*n;
	for(k=0;k<n;k++){
		t = n;
		c = 0;
		if(k%2 == 0){
			while(t--){
				a[c][k]=i;
				i++;
				c++;
			}
		}
		else{
			while(t--){
				//cout << j <<" ";
				a[c][k]=j;
				c++;
				j--;
			}
		}
		//cout << endl;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
}
