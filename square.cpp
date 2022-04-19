#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		if(a > b)
			swap(a,b);
		if(c > d)
			swap(c,d);
			
		if(a+c == b && b == d)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}
