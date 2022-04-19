#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
int main(){
	IOS;
	int test;
	cin >> test;
	while(test--){
		int n,i,le,lo;
		veci even,odd;
		cin >> n;
		int a[2*n];
		for(i=0;i<2*n;i++){
			cin >> a[i];
			if(a[i]%2 == 0)even.push_back(i+1);
			else odd.push_back(i+1);		
		}
		le = even.size();
		lo = odd.size();
		if(le%2 == 1){
			even.pop_back();
			odd.pop_back();
		}
		else if(le > lo){
			even.pop_back();
			even.pop_back();
		}
		else{
			odd.pop_back();
			odd.pop_back();
		}
		lo = odd.size();	
		for(i=0;i<even.size();i+=2)
			cout << even[i]<<" "<<even[i+1]<<endl;
		for(i=0;i<odd.size();i+=2)
			cout << odd[i]<<" "<<odd[i+1]<<endl;
	}
}

