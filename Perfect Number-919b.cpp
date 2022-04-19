#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10000]={0},s,i,k=1,l,n;
	for(i=0;i<10000;i++){
		while(1){
			s = 0;
			l=k;
			while(l){
				s = s+l%10;
				l/=10;
			}
			k++;
			if(s<=10)
				break;
		}
		a[i]=(k-1)*10+10-s;
	}
	cin >> n;
	cout <<a[n-1]<<endl;
}
