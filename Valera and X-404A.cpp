#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,a[26]={0},s=0;
	cin >> n;
	string str[n];
	for(i=0;i<n;i++){
		cin >> str[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[str[i][j]-'a']=1;
		}
	}
	for(i=0;i<26;i++){
		s = s+a[i];
	}
	if(s !=2){
		cout <<"NO"<<endl;
		return 0;
	}
	char ch = str[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j==n-1 || i==j){
				if(str[i][j]!=ch){
					cout <<"NO"<<endl;
					return 0;
				}
			}
			else{
				if(str[i][j]==ch){
					cout <<"NO"<<endl;
					return 0;
				}
			}
		}
	}
	cout <<"YES"<<endl;
}
//Dedicated to Ankar.
