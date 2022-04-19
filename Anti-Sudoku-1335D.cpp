#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,i,j;
	cin >> test;
	while(test--){
		string str[10];
		for(i=0;i<9;i++){
			cin >> str[i];
		}
		for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				if(str[i][j]=='8'){
					str[i][j]='9';
				}
			}
		}
		for(i=0;i<9;i++){
			cout << str[i]<<endl;
		}	
	}
}
