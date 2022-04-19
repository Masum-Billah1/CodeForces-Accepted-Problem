#include<bits/stdc++.h>
using namespace std;
int c = 0;
int main(){
	int a,b,i,j,ti,tj,d=0;
	cin >> a >> b;
	string str[a],z,y;
	for(i=0;i<a;i++)
		cin >> str[i];
	for(i=1;i<a-1;i++){
		for(j=1;j<b-1;j++){
			if(str[i][j-1]=='*'&&str[i][j]=='*'&&str[i][j+1]=='*'&&str[i-1][j]=='*'&&str[i+1][j]=='*'){
				c=1;
				ti=i;
				tj=j;
				break;
			}
		}
	}
	if(c == 0){
		cout <<"NO"<<endl;
		return 0;
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i == ti || j == tj)
				continue;
			else if(str[i][j]=='*'){
				cout << "NO"<<endl;
				return 0;
			}
		}
	}
	for(i=0;i<a;i++){
		z = z+str[i][tj];
	}
	for(i=0;i<b;i++){
		y = y+str[ti][i];
	}
	for(i=0;i<b-1;i++){
		if(y[i]=='*' && y[i+1]=='.'){
			for(i=i+2;i<b;i++){
				if(y[i]=='*'){
					cout <<"NO"<<endl;
					return 0;
				}
			}
		}
	}
	for(i=0;i<a-1;i++){
		if(z[i]=='*' && z[i+1]=='.'){
			for(i=i+2;i<a;i++){
				if(z[i]=='*'){
					cout <<"NO"<<endl;
					return 0;
				}
			}
		}
	}
	cout <<"YES"<<endl;
}
