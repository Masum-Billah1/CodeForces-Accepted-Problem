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
		ll a,b,c,d,temp;
		bool yes = 1;
		cin >> a >> b >> c >> d;
		if((a+b)<(c+d))
			yes = 0;
		else{
			if(a<b)
				swap(a,b);
			if(d>b)
				yes = 0;
		}
		if(yes == 1)
			cout <<"Yes"<<endl;
		else
			cout <<"No"<<endl;
	}
}

