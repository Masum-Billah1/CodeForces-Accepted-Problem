#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	long long int large=0;
	cin >> n;
	for(i=0;i<n;i++){
		long long int a,b;
		cin >> a >> b;
		if((a+b)>large)
			large = a+b;	
	}
	cout << large<<endl;
}
//dedicated to ankar
