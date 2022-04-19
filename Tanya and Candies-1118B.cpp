#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sleven=0,slodd=0,i,sreven=0,srodd=0,cnt=0;
	cin >> n;
	int a[n],b[4][n]={0};
	b[0][0]=0;
	b[1][0]=0;
	for(i=0;i<n;i++){
		cin >> a[i];
		if(i>0 && (i-1)%2==0){
			sleven +=a[i-1];
			b[0][i]=sleven;
			b[1][i]=slodd;
		}
		else if(i>1 && (i-1)%2==1){
			slodd+=a[i-1];
			b[0][i]=sleven;
			b[1][i]=slodd;
		}
	}
	b[2][n-1]=0;
	b[3][n-1]=0;
	for(i=n-2;i>=0;i--){
		if((i+1)%2==0){
			sreven+=a[i+1];
			b[2][i]=sreven;
			b[3][i]=srodd;
		}
		else{
			srodd+=a[i+1];
			b[2][i]=sreven;
			b[3][i]=srodd;
		}
	}
	for(i=0;i<n;i++){
		//cout <<b[0][i]<<" "<<b[1][i]<<" "<<b[2][i]<<" "<<b[3][i]<<endl;
		if(b[0][i]+b[3][i]==b[2][i]+b[1][i])
			cnt++;
	}
	cout << cnt << endl;
}
