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
		int n,x,r=0,temp,rp,dif,i;
		cin >> n >> x;
		int a[n];
		rp = n;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(i=n-1;i>=0;i--){
			temp = ceil(x*1.0/a[i]);
			dif = rp-i;
			//cout <<"temp : "<<temp<<endl;
			//cout <<"dif : "<<dif<<endl;
			if(temp<=dif){
				rp = i;
				r++;
			}
		}
		cout << r << endl;
	}
}

