#define	ll    long long
#define  seti  set<int>
#define  setl  set<ll>
#define  veci  vector<int>
#define  vecl  vector<ll>
#define  IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	int test,i;
	cin >> test;
	while(test--){
		int n;
		bool b = 0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=1;i<n;i++){
			if(abs(a[i]-a[i-1])>=2){
				b = 1;
				cout << "YES" << endl;
				cout << i <<" "<<i+1<<endl;
				break;
			}
		}
		if(b == 0)
			cout <<"NO"<<endl;
	}
}
//Dedicated to Sumaiya Tasnim Fiha.
