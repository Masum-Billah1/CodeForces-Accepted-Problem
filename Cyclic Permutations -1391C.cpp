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
const int na = 1e9+7;
using namespace std;
int main(){
	IOS;
	int test=1;
	//cin >> test;
	while(test--){
		ll i,j,n,temp=1,result=1;
		cin >> n;
		while(n--){
			if(n!=0)
				temp*=2;
			result*=(n+1);
			temp%=na;
			result%=na;
		}
		result-=temp;
		if(result<0)
			result+=na;
		cout << result << endl;
	}
}

