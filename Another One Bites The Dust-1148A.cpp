#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,c;
	cin >> a >> b >> c;
	a = a+c;
	b = b+c;
	if(a==b)
		cout << a+b<<endl;
	else if(a>b)
		cout <<2*b+1<<endl;
	else
		cout <<2*a+1<<endl;
}
