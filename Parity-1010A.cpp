#include<bits/stdc++.h>
using namespace std;
int main(){
	int b,k,i,odd=0;
	cin >> b >> k;
	int a[k];
	for(i=0;i<k;i++){
		cin >> a[i];
		if(b % 2 && a[i] % 2 && i < k-1){
			odd++;
		}
	}
	if(a[k-1]%2 == 1)
		odd++;
	if(odd % 2){
		cout <<"odd"<<endl;
	}
	else
		cout <<"even"<<endl;
}
