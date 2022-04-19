#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,test,i;
	cin >> n >> test;
	int a[n],b[100000]={0},c[n],disnt=0;
	for(i=0;i<n;i++){
		cin >> a[i];
		b[a[i]-1]++;
	}
	for(i=0;i<100000;i++){
		if(b[i]>0)
			disnt++;
	}
	for(i=0;i<n;i++){
		c[i]=disnt;
		b[a[i]-1]--;
		if(b[a[i]-1] == 0){
			disnt--;
		}
	}
	for(i=0;i<test;i++){
		int q;
		cin >> q;
		cout << c[q-1]<<endl;
	}
}
//dedicated to Iqbal aziz khan sir
