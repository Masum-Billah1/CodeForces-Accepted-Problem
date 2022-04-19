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
		ll n,i;
		bool b = 1;
		cin >> n;
		for(i=0;i<50;i++){
			if(n%6==0)
				n/=6;
			else if(n == 1){
				cout << i <<endl;
				b = 0;
				break;
			}
			else{
				n*=2;
			}
		}
		if(b == 1)
			cout << -1 << endl;
	}
}

