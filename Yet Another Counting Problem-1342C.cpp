#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll calculate(ll a,ll div,ll b){
	ll s=0;
	ll temp = a;
	if(a > b){
		s=b-1;
		a = a-s;
	}
	else if(a<b){
		s+=a;
		a-=a;
	}
	if(a>0)
		s = s+(a/div)*b;
	s = temp-s;
	return s;
}
int main(){
	ll test;
	cin >> test;
	while(test--){
		ll a,b,temp,c,d,e,f,q;
		cin >> a >> b >> q;
		if(a > b)
			swap(a,b);
		temp = a*b;
		cout <<"temp:"<<temp<<endl;
		temp = temp/(__gcd(a,b));
		cout <<"temp:"<<temp<<endl;
		while(q--){
			cin >> c >> d;
			if(temp == b){
				cout << 0 <<" ";
			}
			else{
				e = calculate(c-1,temp,b);
				f = calculate(d,temp,b);
				cout <<"e : "<<e<<endl;
				cout <<"f : "<<f<<endl;
				cout << f-e<<" ";
			}
		}
		cout <<endl;
	}
}
