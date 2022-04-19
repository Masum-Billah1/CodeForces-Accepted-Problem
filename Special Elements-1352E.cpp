#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,i,c=0,temp=2,s,j;
		cin >> n;
		int a[n],b[n]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
			b[a[i]-1]++;
		}
		/*for(i=0;i<n;i++){
			cout << b[i]<<" ";
		}cout << endl;*/
		for(i=0;i<n-1;i++){
			s = 0;
			for(j=i;j<i+2;j++){
				s = s+a[j];
			}
			if(s <= n && b[s-1]!=0){
				c+=b[s-1];
				b[s-1]=0;
			}
			for(;j<n;j++){
				s +=a[j];
				if(s <= n && b[s-1]!=0){
					c+=b[s-1];
					b[s-1]=0;
				}
				if(s >= n)
					break;
			}
		}
		cout << c << endl;
	}
}
