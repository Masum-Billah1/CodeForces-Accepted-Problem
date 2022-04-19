#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=0,i,t,k,a[8],n;
	for(i=1;i<9;i++){
		s = 0;
		t = i;
		k = i-1;
		while(t--){
			s = s+pow(2.0,k);
			k++;
		}
		a[8-i]=s;
	}
	cin >> n;
	for(i=0;i<8;i++){
		if(a[i]<=n && n%a[i]==0){
			cout << a[i]<<endl;
			return 0;
		}
	}
}
