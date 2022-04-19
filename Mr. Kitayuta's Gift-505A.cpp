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
isp(string a,int n){
	int i;
	bool yes = 1;
	for(i=0;i<n/2;i++){
		if(a[i] != a[n-i-1]){
			yes = 0;
		}
	}
	return yes;
}
int main(){
	IOS;
	int test=1;
	//cin >> test;
	while(test--){
		int i,j,n,m,a,b,c=0;
		string str,t;
		cin >> str;
		n = str.size();
		if(isp(str,n)){
			for(i=0;i<=n/2;i++){
				cout << str[i];
			}
			cout << str[i-1];
			for(;i<n;i++){
				cout << str[i];
			}
		}
		else{
			for(i=0;i<n/2;i++){
				str+=' ';
				t = str;
				if(str[i] != str[n-i-1]){
					for(j=n;j>i;j--){
						str[j]=str[j-1];
					}
					str[i] = str[n-i];
					for(j=n;j>n-i;j--){
						t[j]=t[j-1];
					}
					t[n-i]=t[i];
					break;		
				}	
			}
			/*cout <<"str : "<<str<<endl;
			cout <<"t : "<<t<<endl;*/
			if(isp(str,n+1))
				cout <<str<<endl;
			else if(isp(t,n+1))
				cout << t << endl;
			else
				cout <<"NA"<<endl;
		}	
	}
}

