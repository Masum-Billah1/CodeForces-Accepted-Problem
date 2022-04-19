#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	bool yes = 1;
	cin >> n;
	int a[n],i,large=0,in=0;
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]>large){
			large = a[i];
			in = i;
		}
	}
	for(i=0;i<in-1;i++){
		if(a[i] >= a[i+1])
			yes = 0;
	}
	for(i=in;i<n-1;i++){
		if(a[i] <= a[i+1])
			yes = 0;
	}
	if(yes == 1)
		cout << "YES"<<endl;
	else
		cout <<"NO"<<endl;
}
