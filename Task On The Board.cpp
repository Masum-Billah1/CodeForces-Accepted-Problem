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
		string str;
		cin >> str;
		int n,a[26]={0},i,zero=0,j=25,k;
		cin >> n;
		int b[n];
		string rslt(n,'0');
		for(i=0;i<n;i++)
			cin >> b[i];
		
		for(i=0;i<str.size();i++)
			a[str[i]-'a']++;
			
		while(1){
			if(zero == n)
				break;
			veci v;
			int cnt = 0;
			for(i=0;i<n;i++){
				if(b[i]==0 && rslt[i]=='0'){
					v.push_back(i);
					cnt++;
				}
			}
			while(a[j] < cnt)
				j--;
			for(i=0;i<n;i++){
				if(b[i]==0 && rslt[i]=='0'){
					zero++;
					rslt[i] = j+'a';
				}
			}
			j--;
			for(i=0;i<v.size();i++){
				for(k=0;k<n;k++){
					b[k]=b[k]-abs(v[i]-k);
				}
			}
		}
		cout << rslt << endl;
	}
}
//Dedicated To sumaiya Tasnim Fiha.
