#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,l=0,r=0,u=0,d=0,t;
	cin >> n;
	string s;
	cin >> s;
	for(i=0;i<n;i++){
		if(s[i]=='L')
			l++;
		else if(s[i]=='R')
			r++;
		else if(s[i]=='U')
			u++;
		else if(s[i]=='D')
			d++;
	}
//	cout <<"l="<<l<<" r="<<r<<" u= "<<u<<" d="<<d<<endl;
	t = min(l,r)+min(u,d);
	cout << t*2 <<endl;
}
