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
	cin >> test;
	while(test--){
		int i,j,n,m,c0,c1,c2,t,s=0;
		c0 = c1 = c2 = 0;
		cin >> n;
		t = n/3;
		//cout <<"t : "<<t<<endl;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
			m = a[i]%3;
			if(m == 0)
				c0++;
			else if(m == 1)
				c1++;
			else
				c2++;
		}
		/*cout <<"c0 : "<<c0<<endl;
		cout <<"c1 : "<<c1<<endl;
		cout <<"c2 : "<<c2<<endl;*/
		if(c0>t){
			c1+=c0-t;
			s+=(c0-t);
			c0 = t;
			//cout <<"s : "<<s<<endl;
		}
		if(c1>t){
			c2+=c1-t;
			s+=(c1-t);
			c1 = t;
			//cout <<"s : "<<s<<endl;
		}
		if(c2>t){
			c0+=c2-t;
			s+=(c2-t);
			c2 = t;
			//cout <<"s : "<<s<<endl;
		}
		if(c0>t){
			c1+=c0-t;
			s+=(c0-t);
			c0 = t;
			//cout <<"s : "<<s<<endl;
		}
		if(c1>t){
			c2+=c1-t;
			s+=(c1-t);
			c1 = t;
			//cout <<"s : "<<s<<endl;
		}
		if(c2>t){
			c0+=c2-t;
			s+=(c2-t);
			c2 = t;
			//cout <<"s : "<<s<<endl;
		}
		cout << s << endl;
	}
}

