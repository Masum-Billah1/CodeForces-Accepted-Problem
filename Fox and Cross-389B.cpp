#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,c=0;
	cin >> n;
	string a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=1;i<n-1;i++){
		for(j=1;j<n-1;j++){
			if(a[i][j]=='#' && a[i][j-1]=='#' && a[i][j+1]=='#' && a[i-1][j] == '#'&&a[i+1][j]=='#'){
				//cout <<"Masum & Sumaiya"<<endl;
				a[i][j]='.';
				a[i][j-1]='.';
				a[i][j+1]='.';
				a[i-1][j] = '.';
				a[i+1][j]='.';
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]=='#'){
				cout << "NO"<<endl;
				return 0;
			}
		}
	}
	cout <<"YES"<<endl;
}
