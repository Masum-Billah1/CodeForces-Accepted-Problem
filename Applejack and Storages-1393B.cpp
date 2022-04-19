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
	//cin >> test;
	while(test--){
		int i,j,n,m,two=0,four=0;
		cin >> n;
		int a[n],b[na+1]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(i=1;i<na;i++){
			two+=(b[i]/2);
			four+=(b[i]/4);
		}
		int q;
		cin >> q;
		while(q--){
			//cout <<"masum"<<endl;
			char ch;
			int input;
			cin >> ch >> input;
			if(ch == '+'){
				two-=(b[input]/2);
				four-=(b[input]/4);
				b[input]++;
				two+=(b[input]/2);
				four+=(b[input]/4);
			}
			else{
				two-=(b[input]/2);
				four-=(b[input]/4);
				b[input]--;
				two+=(b[input]/2);
				four+=(b[input]/4);
			}
			if(four > 0 && two>3)
				cout <<"YES"<<endl;
			else
				cout <<"NO"<<endl;
		}
	}
}

