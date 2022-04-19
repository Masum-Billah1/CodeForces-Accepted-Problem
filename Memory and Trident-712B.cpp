#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int s = str.size();
	if(s%2 == 1){
		cout << -1 <<endl;
		return 0;
	}
		
	int i,u=0,d=0,r=0,l=0,sum,t;
	for(i=0;i<s;i++){
		if(str[i]=='U')
			u++;
		if(str[i]=='D')
			d++;
		if(str[i]=='R')
			r++;
		if(str[i]=='L')
			l++;	
	}
	t = min(u,d);
	u = u-t;
	d = d-t;
	t = min(r,l);
	l = l-t;
	r = r-t;
	sum = u+d+l+r;
	cout << sum/2 << endl;
}
