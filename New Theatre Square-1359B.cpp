#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int m,n,x,y,i,j,cnt=0,price=0;
		cin >> m >> n >> y >> x;
		string a[m];
		for(i=0;i<m;i++){
			cin >> a[i];
		}
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(a[i][j]=='.'){
					cnt++;
				}
			}
		}
		if(y*2<=x){

			cout << cnt*y<<endl;
		}
		else{
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					if(a[i][j]=='.' && a[i][j+1] == '.' && j+1!=n){
						price+=x;
						a[i][j] = '#';
						a[i][j+1] = '#';
					}
					else if(a[i][j]=='.'){
						price+=y;
					}
				}
			}
			cout << price << endl;
		}
	}
}

