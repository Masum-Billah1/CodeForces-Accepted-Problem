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
		int i,j,n,m,d=0,r=0,t=0;
		cin >> n;
		string s;
		cin >> s;
		s+='1';
		for(i=1;i<=n;i++){
			if(s[0]!=s[1])
				t = 1;
			if(d>-2)
				r++;
			if(s[i]==s[i-1]){
				d--;
			}
			else{
				if(t==0){
					d--;
				}
				else{
					d = 0;
				}
				t = 1;
			}
			cout <<"t : "<<t<<endl;
			cout <<"r : "<<r<<endl;
			
		}
		/*if(n==1)
			r++;
		else if(d>=-1)
			r++;*/
		cout <<"t : ";
		t = ceil(r*1.0/2);
		cout << t << endl;
	}
}

