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
		int i,j,n,m,t=-1;
		cin >> n;
		int a[n];
		int b[n+1]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(i=0;i<=n;i++){
			if(b[i]==1){
				t = i;
				break;
			}
		}
		//cout <<"t : "<<t<<endl;
		if(t == -1)
			cout << t <<endl;
		else{
			for(i=0;i<n;i++){
				if(a[i]==t){
					cout << i+1<<endl;
					break;
				}
			}
		}
	}
}

