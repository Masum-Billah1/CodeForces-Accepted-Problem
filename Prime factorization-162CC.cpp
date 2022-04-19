#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,a[10001]={0},b[1230];
	for(i=2;i<=100;i++){
		for(j=2;i*j<=10000;j++){
			a[i*j]=1;
		}
	}
	j=0;
	for(i=2;i<=10000;i++){
		if(a[i]==0){
			b[j]=i;
			j++;
		}
	}
	for(i=0;i<1230;i++){
		cout << b[i]<<" ";
	}
}
