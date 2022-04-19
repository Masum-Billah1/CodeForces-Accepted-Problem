#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,i,dis=1,large=1,cnt=1;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(i=1;i<n;i++){
			if(a[i] == a[i-1]){
				cnt++;
			}
			else{
				dis++;
				if(cnt > large)
					large = cnt;
				cnt=1;
			}
		}
		if(cnt > large)
			large = cnt;
		if(large<=dis)
			dis--;
		cout << min(large,dis)<<endl;
	}
}
