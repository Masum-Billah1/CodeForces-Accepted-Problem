#include<bits/stdc++.h>
using namespace std;
int d[200000];
int main(){
	long long int n,a,b,k,i,sum,mod,l=0,c=0,dif;
	cin >> n >> a >> b >> k;
	sum = a+b;
	int e[n];
	for(i=0;i<n;i++){
		dif = 0;
		cin >> e[i];
		mod = e[i]%sum;
		if(mod == 0)
			dif = b;
		else if(mod>a)
			dif = mod - a;
		else
			c++;
		if(dif !=0){
			d[i]=ceil(dif*1.0/a);
		}
		else
			d[i]=1000000000;
	}
	sort(d,d+n);
	/*for(i=0;i<n;i++){
		cout << d[i]<<" ";
	}*/
	for(i=0;i<n;i++){
		if(d[i] <= k){
			c++;
			k = k-d[i];
		}
	}
	if(c < n)
		cout << c << endl;
	else
		cout << n << endl;
}
//dedicated to my mom
