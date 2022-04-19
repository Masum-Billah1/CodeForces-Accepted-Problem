#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,l=0,t,c;
	cin >> n;
	char ch1,ch2;
	string a;
	cin >> a;
	for(i=0;i<n-1;i++){
		c=0;
		for(j=0;j<n-1;j++){
			if(a[i]==a[j]&&a[i+1]==a[j+1]){
				c++;
			}
		}
		if(c>l){
			l = c;
			t = i;
		}
	}
	cout <<a[t]<<a[t+1]<<endl;
}
