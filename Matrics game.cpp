#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,m,row=0,colmn=0,i,j;
		cin >> n >> m;
		int a[n][m];
		for(i=0;i<n;i++){
			bool b = 1;
			for(j=0;j<m;j++){
				cin >> a[i][j];
				if(a[i][j] == 1)
					b = 0;
			}
			row+=b;
		}
		for(i=0;i<m;i++){
			bool b = 1;
			for(j=0;j<n;j++){
				if(a[j][i] == 1)
					b = 0;
			}
			colmn+=b;
		}
		row = min(row,colmn);
		if(row%2)
			cout <<"Ashish"<<endl;
		else
			cout <<"Vivek"<<endl;
	}
}
