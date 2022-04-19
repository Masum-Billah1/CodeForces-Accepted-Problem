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
		int i,j,n,m,type,c=0;
		cin >> n;
		char a[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		if(a[0][2]=='1' && a[1][1] =='1' && a[2][0]=='1')
			type = 1;
		else if(a[0][2]=='0' && a[1][1] =='0' && a[2][0]=='0')
			type = 2;
		else if(a[0][1]=='0' && a[1][0]=='0')
			type = 1;
		else if(a[0][1]=='1' && a[1][0]=='1')
			type = 2;
		else if(a[0][2]-'0'+a[1][1]-'0'+a[2][0]-'0'==2)
			type = 1;
		else 
			type = 2;
		
		if(type == 1){
			if(a[0][1]=='1')
				c++;
			if(a[1][0]=='1')
				c++;
			if(a[0][2]=='0')
				c++;
			if(a[1][1]=='0')
				c++;
			if(a[2][0]=='0')
				c++;
			cout << c << endl;
			if(a[0][1]=='1')
				cout << 1 <<" "<<2<<endl;
			if(a[1][0]=='1')
				cout << 2 <<" "<<1<<endl;
			if(a[0][2]=='0')
				cout << 1 <<" "<<3<<endl;
			if(a[1][1]=='0')
				cout << 2 <<" "<<2<<endl;
			if(a[2][0]=='0')
				cout << 3 <<" "<<1<<endl;
		}
		else{
			if(a[0][1]=='0')
				c++;
			if(a[1][0]=='0')
				c++;
			if(a[0][2]=='1')
				c++;
			if(a[1][1]=='1')
				c++;
			if(a[2][0]=='1')
				c++;
			cout << c << endl;
			if(a[0][1]=='0')
				cout << 1 <<" "<<2<<endl;
			if(a[1][0]=='0')
				cout << 2 <<" "<<1<<endl;
			if(a[0][2]=='1')
				cout << 1 <<" "<<3<<endl;
			if(a[1][1]=='1')
				cout << 2 <<" "<<2<<endl;
			if(a[2][0]=='1')
				cout << 3 <<" "<<1<<endl;
		}
	}
}
