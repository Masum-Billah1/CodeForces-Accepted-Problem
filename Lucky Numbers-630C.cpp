#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	long long int s=0;
	cin >> n;
	for(i=1;i<=n;i++){
		s = s+pow(2.0,i*1.0);
	}
	printf("%lld\n",s);
}
