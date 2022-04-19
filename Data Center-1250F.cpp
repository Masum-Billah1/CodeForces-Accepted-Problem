#define ll long long int
#define an 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin >> n;
	for(i=(int)sqrt(n);i>0;i--){
		if(i*(n/i) == n){
			cout << (i+(n/i))*2<<endl;
			return 0;
		}
	}
}

