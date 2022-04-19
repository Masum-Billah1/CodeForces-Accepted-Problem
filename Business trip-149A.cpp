#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,a[12],i,s=0;
	cin >> k;
	for(i=0;i<12;i++){
		cin >> a[i];
	}
	
	sort(a,a+12);
	reverse(a,a+12);
	
	for(i=0;i<12;i++){
		if(s>=k)
			break;
		s = s + a[i];
	}
	if(s < k)
		cout << -1 << endl;
	else
		cout << i << endl;
}
