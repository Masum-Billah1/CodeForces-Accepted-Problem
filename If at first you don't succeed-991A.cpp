#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,n;
	cin >> a >> b >> c >> n;
	int s = c+n-(a+b);
	if(s<=0 || c>a || c>b)
		cout << -1 <<endl;
	else
		cout << s << endl;
}
//dedicated to my brother
