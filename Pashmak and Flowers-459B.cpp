#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,t1,t2,c1=0,c2=0,i;
	long long int way;
	cin >> n;
	long long int b[n];
	for(i=0;i<n;i++){
		cin >> b[i];
	}
	sort(b,b+n);
	t1 = b[0];
	t2 = b[n-1];
	for(i=0;i<n;i++){
		if(b[i] == t1)
			c1++;
		else if(b[i] == t2)
			c2++;
	}
	if(t1 == t2)
		way = n*(n-1)/2;
	else
		way = c1*c2;
	cout << t2-t1 <<" "<< way << endl;
}
