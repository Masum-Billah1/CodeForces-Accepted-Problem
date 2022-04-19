#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,a,b,c,j;
		char i;
		cin >> a >> b >> c;
		string s;
		for(i='a';i<'a'+c;i++){
			s = s+i;
		}
		for(j=c;j<b;j++){
			s = s+'a';
		}
		for(j=b;j<a;j++){
			s = s+s[j-b];
		}
		cout << s << endl;
	}
}
