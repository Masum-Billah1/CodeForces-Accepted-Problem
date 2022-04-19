 #include<bits/stdc++.h>
using namespace std;
int main(){
	long long int test;
	cin >> test;
	while(test--){
		long long int n,i,plus=0,minus=0,yes=1;
		cin >> n;
		int a[n];
		long long int b[n];
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		for(i=0;i<n;i++){
			cin >> b[i];
		}
		if(a[0]!=b[0])
				yes = 0;
		for(i=0;i<n-1;i++){
			if(a[i]==1){
				plus = 1;
			}
			else if(a[i]==-1){
				minus = 1;
			}
			if(a[i+1]!=b[i+1]){
				if(a[i+1]<b[i+1] && plus == 0)
					yes = 0;
				if(a[i+1]>b[i+1] && minus == 0)
					yes = 0;
			}
		}
		if(yes == 0)
			cout <<"NO"<<endl;
		else
			cout <<"YES"<<endl;
	}
	
}
