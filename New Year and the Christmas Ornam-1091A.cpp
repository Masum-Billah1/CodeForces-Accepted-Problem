#include<bits/stdc++.h>
using namespace std;
int main(){
	int y,b,r;
	cin >> y >> b >> r;
	b--;r-=2;
	y = min(y,min(b,r));
	cout << y*3+3<<endl;
}

