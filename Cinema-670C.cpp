#include<bits/stdc++.h>
using namespace std;
int how_many(int a[],int n,int b){
	int up,lb;
	up = upper_bound(a,a+n,b)-a;
	lb = lower_bound(a,a+n,b)-a;
	return (up-lb);
}
int main(){
	int n,i,temp=0,in=1,sub=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int m;
	cin >> m;
	int b[m],c[m];
	for(i=0;i<m;i++){
		cin >> b[i];
		b[i] = how_many(a,n,b[i]);
	}
	for(i=0;i<m;i++){
		cin >> c[i];
		c[i] = how_many(a,n,c[i]);
	}
	for(i=0;i<m;i++){
		if(b[i]>temp){
			temp = b[i];
			in = i+1;
			sub = c[i];
		}
		if(b[i] == temp && c[i]>sub){
			sub = c[i];
			in = i+1;
		}
	}
	cout << in <<endl;
}
