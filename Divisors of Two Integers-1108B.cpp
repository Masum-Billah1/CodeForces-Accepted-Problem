#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n],b[n]={0},temp,k=0,i,maximum = 0,t;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	temp = a[n-1];
	for(i=1;i<=(int)sqrt(temp);i++){
		if(temp % i == 0){
			b[k] = i;
			k++;
			if(i!=(temp/i)){
				b[k] = temp/i;
				k++;
			}
		}
	}
	t = k;
	sort(b,b+k);
	k=0;
	for(i=0;i<n;i++){
		if(b[k] == a[i]){
			a[i]=0;
			k++;
		}
		if(t<k)
			break;
	}
	for(i=0;i<n;i++){
		maximum = max(maximum,a[i]);
	}
	cout <<temp <<" "<< maximum <<endl;
}
