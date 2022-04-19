#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,m,i,j,cnt=0;
		bool b=1,yes=1;
		cin >> n >> m;
		string a[n],result;
		for(i=0;i<n;i++)
			cin >> a[i];
		for(i=0;i<m;i++){
			int d[26]={0},s=0,large = 0,in;
			for(j=0;j<n;j++){
				d[a[j][i]-'a']++;
			}
			for(j=0;j<26;j++){
				if(d[j]>large){
					large = d[j];
					in = j;
				}
			}
			char ch = 'a'+in;
			for(j=0;j<n;j++){
				if(a[j][i]!=ch){
					result+=ch;
					for(i++;i<m;i++){
						result+=a[j][i];
					}
					b = 0;
					break;
				}
			}
			if(b == 0)break;
			result+=ch;
			
		}
		for(i=0;i<n;i++){
			cnt = 0;
			for(j=0;j<m;j++){
				if(a[i][j] != result[j]){
					cnt++;
					if(cnt >=2){
						yes = 0;
					}
				}
			}
		}
		if(yes == 0)
			cout << -1 << endl;
		else
			cout << result << endl;
	}
}
//dedicated to Sumaiya Tasnim Fiha.
