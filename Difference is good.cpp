#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[26]={0},c=0,i;
	cin >> n;
	if(n>26){
		cout <<-1 <<endl;
		return 0;	
	}
	string s;
	cin >> s;
	
	for(i=0;i<n;i++){
		a[s[i]-'a']++;
	}
	for(i=0;i<26;i++){
		if(a[i]!=0){
			c++;
		}
	}
	//cout <<"c : "<<c<<endl;
	cout << n-c <<endl;
}
