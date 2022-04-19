#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m,a,b,div,cel;
	cin >> n >> m >> a >> b;
	if(n%m == 0){
		cout << 0 << endl;
		return 0;
	}
	div = n%m;
	cel = ceil((n*1.0)/m)*m;
	cel = cel - n;
	div = div*b;
	cel = cel*a;
	div = min(div,cel);
	cout << div << endl;	
}
