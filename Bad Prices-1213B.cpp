#include<bits/stdc++.h>
using namespace std;
int main(){
	int test,min;
	cin >> test;
	while(test--){
		int n,i;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++)
			cin >> a[i];
		int k=0,c=0,d=0,s=0;
		while(k<n){
			int c=0,z=0;
			min = a[k];
			for(i=k;i<n;i++){
				cout << i <<endl;
				if(i!=n-1 && a[i]>a[i+1])
					z=1;
				if(a[i]<min)
					c=0;
				if(a[i]<=min){
					d=i;
					min=a[i];
				}
				if(a[i]==min)
					c++;
			}
			if(c>0)
				c--;
			s = s+d-k-c;
			k=d+1;
		if(z==0)
			break;
		}
		cout << s <<endl;
	}
}
