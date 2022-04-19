#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10000]={0},b[170]={0},c[75]={0},i,j,k=0,temp,l=0;
	for(i=2;i<100;i++){
		for(j=2;i*j<=10000;j++){
			a[i*j] = 1;
		}
	}
	for(i=2;i<1000;i++){
		if(a[i] == 0){
			b[k] = i;
			k++;
		}
	}
	for(i=0;i<167;i++){
		temp = b[i]+b[i+1]+1;
		if(a[temp]==0){
			c[l]=temp;
			l++;
		}
	}
	/*for(i=0;i<74;i++){
		cout << c[i]<<endl;
	}*/
	int n,q;
	cin >> n >> q;
	temp = upper_bound(c,c+74,n)-c;
	if(temp >= q)
		cout <<"YES"<<endl;
	else
		cout <<"NO"<<endl;
}
