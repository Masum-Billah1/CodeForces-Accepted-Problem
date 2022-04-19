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
		int i,j,n,m,temp;
		veci v;
		cin >> n;
		string a,b;
		cin >> a >> b;
		for(i=n-1;i>0;i--){
			if(b[i]!=a[i]){
				if(a[0]==b[i]){
					v.pus(1);
					if(a[0]=='0')
						a[0]='1';
					else
						a[0]='0';
				}
				v.pus(i+1);
				for(j=0;j<=i;j++){
					if(a[j]=='0')
						a[j]='1';
					else
						a[j]='0';
				}
				for(j=0;j<=i/2;j++){
					swap(a[j],a[i-j]);
				}
			}
		}
		if(a[0]!=b[0]){
			v.pus(1);
			if(a[0]=='0')
				a[0]='1';
			else
				a[0]='0';
		}
		cout << v.size()<<" ";
		for(i=0;i<v.size();i++){
			cout <<v[i]<<" ";
		}cout << endl;
	}
}

