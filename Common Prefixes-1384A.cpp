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
		int i,j,n;
		cin >> n;
		string a(50,'a');
		int b[n];
		for(i=0;i<n;i++)
			cin >> b[i];
		cout << a << endl;
		for(i=0;i<n;i++){
			for(j=b[i];j<50;j++){
				if(a[j]=='a')
					a[j]='b';
				else
					a[j]='a';
			}
			cout << a << endl;
		}
	}
}

