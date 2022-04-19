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
		int i,j,n,m,c=0,y=0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<n;i++){
			if(a[i]==i)
				c++;
			else if(a[a[i]]==i && y == 0){
				y = 1;
				c+=2;
			}
		}
		if(c == n || y==1)
			cout << c << endl;
		else
			cout << c+1 << endl;
	}
}

