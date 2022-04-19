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
		int i,j,n,m,c=0,r,st,end;
		cin >> n >> m;
		string s;
		cin >> s;
		for(i=0;i<n;i++){
			if(s[i]=='*')
				c++;
		}
		//cout <<"c : "<<c<<endl;
		r = min(2,c);
		//cout <<"r : "<<r<<endl;
		for(i=0;i<n;i++){
			if(s[i]=='*'){
				st = i;
				break;	
			}
		}
		for(i=n-1;i>=0;i--){
			if(s[i]=='*'){
				end = i;
				break;
			}
		}
		for(i=st;i<=end;){
			//cout <<"i : "<<i<<endl;
			if(i+m<end){
				for(j=i+m;j>i;j--){
					//cout <<"j : "<<j<<endl;
					if(s[j]=='*'){
						r++;
						break;
					}
				}
				i = j;
			}
			else
				break;
		}
		cout << r << endl;
	}
}
