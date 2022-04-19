#define	 ll     long long
#define  seti   set<int>
#define  setl   set<ll>
#define  veci   vector<int>
#define  vecl   vector<ll>
#define  pus(a) push_back(a)
#define  pop()  pop_back()
#define  Min(v)   *min_element(v.begin(),v.end())
#define  Max(v)   *max_element(v.begin(),v.end())
#define  IOS    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
const int na = 1e5;
using namespace std;
int main(){
	IOS;
	int test;
	cin >> test;
	while(test--){
		int n,i;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			if(i%2 && a[i]>0)
				a[i]=-a[i];
			if(i%2 == 0 && a[i]<0)
				a[i]=-a[i];
		}
		for(i=0;i<n;i++)
			cout << a[i]<<" ";
		cout << endl;
	}
}

