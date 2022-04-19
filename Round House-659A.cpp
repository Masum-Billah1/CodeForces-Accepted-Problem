#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int d =(b+c)%a;
	if(d<=0)
		d = a+d;
	cout << d <<endl;
}
