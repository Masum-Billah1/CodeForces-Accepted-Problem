#include<bits/stdc++.h>
twopow(int a){
	int p = 0,i;
	for(i=0;pow(2.0,i)<=a;i++){
	}
	return i;
}
using namespace std;
int main(){
	int n,i,cnt=0,j,up=2,lb;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		int p = twopow(a[i]);
		for(j=p;j<=30;j++){
			up = 2;
			int temp = pow(2,j)-a[i];
			if(temp == a[i]){
				up = upper_bound(a,a+n,temp)-a;
				lb = upper_bound(a,a+n,temp)-a;
				up = up-lb;
			}
			bool b = binary_search(a,a+n,temp);
			if(b == 1 && up>1){
				cnt++;
					break;
			}
		}
	}
	cout << n-cnt << endl;
}
