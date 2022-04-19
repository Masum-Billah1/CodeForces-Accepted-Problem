#define ll long long int
#define na 100001
#include<bits/stdc++.h>
using namespace std;
int main(){
	int b[na];
	int test;
	cin >> test;
	while(test--){
		int n,i,j,large=0;
		cin >> n;
		int a[n+1];
		for(i=1;i<=n;i++)
			cin >> a[i];
		for(i=n;i>0;i--){
			b[i]=1;
			for(j=i*2;j<=n;j+=i){
				if(a[i]<a[j] && b[i]<=b[j])
					b[i]=b[j]+1;
			}
			large = max(large,b[i]);
		}
		cout << large << endl;
	}
}

