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
const int na = 1e3;
using namespace std;
int main(){
	IOS;
	int i,j;
	int n = sqrt(na)+1;
	int a[n]={0};
	veci prime;
	for(i=2;i*i<n;i++){
		for(j=2;i*j<n;j++) a[i*j] = 1;
	}
	for(i=2;i<n;i++){
		if(a[i]==0) prime.pus(i);
	} 	
	int test;
	cin >> test;
	while(test--){
		int q,cnt=0;
		cin >> q;
		int b,c[q],d[32]={0};
		for(i=0;i<q;i++){
			cin >> b;
			for(j=0;j<prime.size();j++){
				if(b%prime[j]==0){
					c[i] = prime[j];
					//cout << "c[i] : "<<c[i]<<endl;
					if(d[c[i]]==0){
						d[c[i]]=++cnt;
						//cout << "cnt : "<<cnt<<endl;
					}
					break;
				}
			}
			//cout <<"c[i]: "<<c[i]<<endl;
		}
		/*cout <<"color code : "<<endl;
		for(i=0;i<12;i++)
			cout << d[i]<<" ";
		cout << endl;*/
		cout << cnt << endl;
		for(i=0;i<q;i++)
			cout << d[c[i]]<<" ";
		cout << endl;
	}
}

