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
		char ch = 'a';
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<n;i++){
			if(i==0)
				temp = max(a[0],1);
			else
				temp = max(1,max(a[i-1],a[i]));
			while(temp--)
				cout <<ch;
			if(a[i]==0){
				if(ch =='a')
					ch = 'b';
				else
					ch = 'a';
			}
			cout << endl;
		}
		//cout << a[n-1]<<endl;
		temp = max(a[n-1],1);
		while(temp--)
			cout <<ch;
		cout << endl;
	}
}

