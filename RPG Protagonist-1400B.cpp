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
		ll m,p,cs,cw,s,w,res=0,i,temp,cnt=0;
		cin >> m >> p;
		cin >> cs >> cw; 
		cin >> s >> w;
		if(s>w){
			swap(s,w);
			swap(cs,cw);
		}
		for(i=0;i<=cs;i++){
			ll cm,cl,wm,wp,tmp;
			cm = cs;
			cl = cw;
			wm = m;
			wp = p;
			cnt = i;
			if(i*s>m) break;
			cm-=i;
			wm-=(i*s);
			tmp = min(cm,wp/s);
			wp-=(tmp*s);
			cnt+=tmp;
			
			tmp = min(cl,wm/w);
			cnt+=tmp;
			cl-=tmp;
			
			tmp = min(cl,wp/w);
			cnt+=tmp;
			res = max(res,cnt);
		}
		cout << res << endl;
	}
}

