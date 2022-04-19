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
		bool yes = 0;
		cin >> n >> m;
		int a[n],ca[10001]={0},b[m],cb[1001]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
			ca[a[i]]++;
		}	
		for(i=0;i<m;i++){
			cin >> b[i];
			cb[b[i]]++;
		}
		for(i=1;i<=1000;i++){
			if(ca[i]>0&&cb[i]>0){
				yes= 1;
				temp = i;
				break;
			}
		}
		if(yes == 1){
			cout <<"YES"<<endl;
			cout << 1 <<" "<< temp << endl;
		}
		else
			cout << "NO"<<endl;
	}
}

