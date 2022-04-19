#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin >> test;
	while(test--){
		int n,i,temp,cnt2=0,cntodd=0;
		cin >> n;
		if(n == 1){
			cout <<"FastestFinger"<<endl;
			continue;
		}
			
		else if(n == 2 || n%2){
			cout <<"Ashishgup"<<endl;
			continue;
		}	
		while(n%2==0){
			cnt2++;
			n/=2;
		}
		for(i=3;i<=sqrt(n);i++){
			while(n%i==0){
				cntodd++;
				n/=i;
			}
		}
		//cout <<"n : "<<n << endl;
		if(n!=1)
			cntodd++;
		if(cntodd == 0)
			cout <<"FastestFinger"<<endl;
		else if(cntodd+cnt2 >2)
			cout <<"Ashishgup"<<endl;
		else
			cout <<"FastestFinger"<<endl;
			
	}
	
}
