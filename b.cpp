#define	 ll     long long
#define  seti   set<int>
#define  setl   set<ll>
#define  veci   vector<int>
#define  vecl   vector<ll>
#define  pus(a) push_back(a)
#define  pop()  pop_back()
#define  Min(v,n)   *min_element(v,v+n)
#define  Max(v,n)   *max_element(v,v+n);
#define  IOS    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	int test=1;
	cin >> test;
	while(test--){
		ll i,j,n,m,k;
		cin >> n >> k;
		ll a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		ll d = Max(a,n);
		ll t = Min(a,n);
		t = d-t;
		for(i=0;i<n;i++){
			a[i]=d-a[i];
		}
		if(k%2){
			for(i=0;i<n;i++)
				cout << a[i]<<" ";
		}
		else{
			for(i=0;i<n;i++)
				cout << t-a[i]<<" ";
		}
		cout << endl;
	}
}

