#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,m,zero=0,i,j,in;
		cin >> n >> m;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin >> in;
				if(in == 0)
					zero++;
			}
		}
		if(zero%2 == 0){
			cout <<"Vivek"<<endl;
		}
		else 
			cout <<"Ashish"<<endl;
	}
}

