#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		ll x1,x2,y1,y2,d1,d2;
		cin >> x1 >> y1 >> x2 >> y2;
		d1 = x2-x1;
		d2 = y2-y1;
		cout <<(d1*d2)+1<<endl;
	}
}
//dedicated to Sumaiya Tasnim Fiha
