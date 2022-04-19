#define ll long long int
#define na 100001
#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int seieve(){
	int i,j;
	int a[na]={0};
	for(i=2;i*i<=na;i++){
		for(j=2;i*j<=na;j++){
			a[i*j]=1;
		}
	}
	for(i=2;i<na;i++){
		if(a[i] == 0){
			prime.push_back(i);
		}
	}
}
int main(){
	seieve();
	prime.push_back(100003);
	int n,m,i,j,sz,mnm = 99999999,s1=0,s2=0;
	sz = prime.size();
	int p[sz];
	for(i=0;i<sz;i++){
		p[i] = prime[i];
	}
	cin >> n >> m;
	int a[n][m],b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> a[i][j];
			if(binary_search(p,p+sz,a[i][j])==1){
				b[i][j] = a[i][j];
			}
			else{
				int temp = a[i][j];
				int up = upper_bound(p,p+sz,a[i][j])-p;
				b[i][j] = p[up];
			}
		}
	}
	for(i=0;i<n;i++){
		s1 = s2 =0;
		for(j=0;j<m;j++){
			s1+=a[i][j];
			s2+=b[i][j];
		}
		s1 = s2-s1;
		mnm = min(mnm,s1);
	}
	for(j=0;j<m;j++){
		s1 = s2 =0;
		for(i=0;i<n;i++){
			s1+=a[i][j];
			s2+=b[i][j];
		}
		s1 = s2-s1;
		mnm = min(mnm,s1);
	}
	cout <<mnm << endl;
}

