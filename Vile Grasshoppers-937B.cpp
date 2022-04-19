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
	bool b=0;
	int x,y,g=0,i;
	cin >> x >> y;
	for(;y>2;y--){
		for(i=2;i<=sqrt(y);i++){
			if(y%i==0)
				break;
		}
		cout << i << endl;
		cout << sqrt(y)<<endl;
		if(i==sqrt(y)+1){
			g = y;
			break;
		}
	}
	cout << g << endl;
	if(g == 0 || g<y)
		cout << g << endl;
	else
		cout << -1 << endl;
}

