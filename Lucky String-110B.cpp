#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin >> n;
	for(i=0;i<n;i++){
		if(i%4 == 0)
			cout<<'a';
		else if(i%4 == 1)
			cout<<'b';
		else if(i%4 == 2)
			cout<<'c';
		else 
			cout <<'d';
	}
}
