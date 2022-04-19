#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i;
	cin >> n >> m;
	ll a[n+1],temp=0;
	for(i=1;i<=n;i++){
		cin >> a[i];
	}
	while(m--){
		int t;
		cin >> t;
		if(t == 1){
			int v,x;
			cin >> v >> x;
			a[v]=x-temp;
		}
		else if(t == 2){
			int y;
			cin >> y;
			temp+=y;
		}
		else{
			int q;
			cin >> q;
			cout << (a[q]+temp)<<endl;
		}
	}
}

