#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	cin >> s;
	cin >> t;
	int ls,lt,i,c=0,j;
	ls = s.size();
	lt = t.size();
	for(i=ls-1,j=lt-1;i>=0;i--,j--){
	//	cout <<"si="<<s[i]<<"tj="<<t[j]<<endl;
		if(s[i]==t[j])
			c++;
		else
			break;
		if(j==0)
			break;
	}
	//cout <<"c="<<c<<endl;
	cout << ls+lt-(c*2)<<endl;
}
