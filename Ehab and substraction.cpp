#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k,l=1;
	cin >> n >> k;
	int a[n],b[k]={0};
	
	for(i=0;i<n;i++)
		cin >> a[i];
		
	sort(a,a+n);
	b[0]=a[0];
	cout << b[0]<<endl;
	if(k==1)
		return 0;
	for(i=1;i<n;i++){
		b[i]=a[i]-a[i-1];
		if(b[i]!=0){
			cout << b[i]<<endl;
			l++;
		}
		if(l==k)
			break;
	}
	
	for(i=l;i<k;i++)
		cout << 0 <<endl;
}
