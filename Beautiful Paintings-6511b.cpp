#include<bits/stdc++.h>
using namespace std;
int b[1001]={0};
int main(){
	int n,i,a,s=0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a;
		b[a]++;
	}
	sort(b,b+1000+1);
	for(i=0;i<1000;i++)
		s=s+b[i];
	cout << s <<endl;
}
