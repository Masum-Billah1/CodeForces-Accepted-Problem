#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[3],i,j,t,s=0,large=0,temp;
	cin >> n >> a[0]>>a[1]>>a[2];
	sort(a,a+3);
	for(i=0;i*a[2]<=n;i++){
		for(j=0;j*a[1]<=n;j++){
			s = i*a[2]+j*a[1];
			t = n-s;
			if(t<0)
				break;
			if((t>0 && t%a[0]==0)||t==0){
				temp = i+j+t/a[0];
				large = max(temp,large);
			}
		}
	}
	cout << large <<endl;
}
