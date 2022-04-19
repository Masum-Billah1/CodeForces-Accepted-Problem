#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,i;
	cin >> test;
	while(test--){
		int n,t1=0,t2=0,c=0;
		cin >> n;
		string a,b;
		cin >> a >> b;
		for(i=0;i<n;i++){
			if(a[i]!=b[i]){
				c++;
				if(t1==0)
					t1 = i;
				else
					t2 = i;
			}
		}
		if(c == 2){
			swap(a[t1],b[t2]);
		}
		if(a == b)
			cout <<"YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
}
