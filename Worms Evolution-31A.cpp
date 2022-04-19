#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
int main(){
	IOS;
	int n,i,j,k,temp;
	bool b=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		temp = a[i];
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(a[j]+a[k]==temp && j!=k){
					cout << i+1 <<" "<<j+1<<" "<<k+1<<" ";
					b = 1;
					return 0;
				}
			}
		}
	}
	if(b == 0)cout << -1 << endl;
}

