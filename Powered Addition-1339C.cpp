#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,i,dif=0,temp,temp2,s=0;
		cin >> n;
		int a[n];
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		temp = a[0];
		for(i=1;i<n;i++){
			if(a[i] >= temp){
				temp = a[i];
			}
			else{
				temp2 = temp-a[i];
				if(dif < temp2)
					dif = temp2;
			}	
		}
		for(i=0;s<dif;i++){
			s = s+pow(2.0,i);
		}
		cout << i << endl;
	}
}
