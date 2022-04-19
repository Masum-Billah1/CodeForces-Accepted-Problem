#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin >> s >> t;
	int ls,lt,a[58]={0},b[58]={0},i,c=0,d=0;
	ls = s.size();
	lt = t.size();
	for(i=0;i<ls;i++){
		a[s[i]-'A']++;
	}
	for(i=0;i<lt;i++){
		b[t[i]-'A']++;
	}
	for(i=0;i<58;i++){
		c = c+min(a[i],b[i]);
		d = d+a[i]-min(a[i],b[i]);
	}
	cout << c <<" "<<d<<endl;
}
