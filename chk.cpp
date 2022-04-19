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
		bool yes = 1;
		int i,j,n,m,k,aa[26]={0},bb[26]={0};
		cin >> n >> k;
		string a,b;
		cin >> a >> b;
		for(i=0;i<a.size();i++){
			aa[a[i]-'a']++;
			bb[b[i]-'a']++;
		}
		for(i=0;i<26;i++){
			//cout <<"yes : "<<yes<<endl;
			if(aa[i]<bb[i])
				yes = 0;
			else{
				aa[i]-=bb[i];
				if(aa[i]==0)
					continue;
				if(aa[i] < k)
					yes = 0;
				else
					aa[i+1]=aa[i+1]+aa[i];	
			}
		}
		if(yes == 1)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}

