#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s=0;
	cin >> n;
	while(n){
		s = s+n%2;
		n/=2;	
	}
	cout << s <<endl;
}
//dedicated to ankar
