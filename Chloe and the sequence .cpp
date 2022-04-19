#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,i,k;
	cin >> n >> k;
	long long int h=pow(2.0,n*1.0)-1,l=1,mid;
	while(l<=h){
		mid = l+(h-l)/2;
		//cout << mid << endl;
		if(mid == k){
			cout << n;
			return 0;
		}
		else if(mid > k){
			h = mid-1;
			n--;
		}
		else{
			l = mid+1;
			n--;
		}
	}	
}
