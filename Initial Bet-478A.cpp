#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,s=0,i;
	for(i=0;i<5;i++){
		cin >> a;
		s = s+a;
	}
	if(s % 5 == 0)
		cout << s/5 <<endl;
	else
		cout << -1 << endl;
}
