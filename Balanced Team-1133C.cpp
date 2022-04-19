#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,c,temp=0,result=0,d;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		temp = i;
		for(j=i;j<n;j++){
			d = a[j]-a[temp];
			if(a[i]==a[j]){
				i++;
			}
			if(d > 5)
				break;
		}
		c = j-temp;
		if(c > result)
			result = c;
	}
	cout << result << endl;
}
