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
	int test;
	cin >> test;
	while(test--){
		int n,k,i,j,cell,mod,result=0;
		cin >> n >> k;
		cell = ceil(k/2.0);
		mod = n/k;
		string s;
		cin >> s;
		/*for(i=0;i<n;i++){
			cout << s[i];
			if((i+1)%k==0) cout << endl;
		}*/
		for(i=0;i<cell;i++){
			int a[26]={0};
			for(j=0;j<mod;j++){
				int in = j*k+i;
				a[s[in]-'a']++;
				a[s[n-in-1]-'a']++;
			}
			int mx = 0;
			for(j=0;j<26;j++){
				mx = max(mx,a[j]);
			}
			//cout <<"mx : "<<mx<<endl;
			if((i+1)*2>k)
				result+=(((mod*2)-mx)/2);
			else 
				result+=((mod*2)-mx);
		}
		cout << result << endl;
	}
}
//Dedicated to Jui.
