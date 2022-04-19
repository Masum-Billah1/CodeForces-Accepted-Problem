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
	int test=1;
	//3cin >> test;
	while(test--){
		int i,j,n,m,k;
		string v = "aeiou";
		cin >> k;
		n = m = 0;
		for(i=5;i<=10000;i++){
			if(k%i==0 && k/i>=5){
				n = i;
				m = k/n;
				break;
			}
		}
		if(m == 0){
			cout << -1 << endl;
			continue;
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cout << v[(i+j)%5];
			}
		}cout << endl;
	}
}

