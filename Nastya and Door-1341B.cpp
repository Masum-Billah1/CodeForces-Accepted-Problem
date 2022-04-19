#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,c=0;
	cin >> test;
	while(test--){
		int n,k,i;
		cin >> n >> k;
		int a[n],l=1,c=0,p=0;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		for(i=1;i<k-1;i++){
			if(a[i-1]<a[i] && a[i]>a[i+1])
				c++;
			p = c;	
		}
		for(i=1;i<=n-k;i++){			
			if(a[i-1]<a[i] && a[i]>a[i+1])
				c--;
			if(a[k+i-3]<a[k+i-2] && a[k+i-2]>a[k+i-1])
				c++;
			if(p < c){
				p = c;
				l = i+1;
			}
		}
		cout << p+1 <<" "<<l<<endl;
	}
}
