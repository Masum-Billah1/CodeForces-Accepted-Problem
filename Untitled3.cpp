#include<bits/stdc++.h>
using namespace std;
int a[200000];
int main(){
	int test;
	cin >> test;
	while(test--){
		int a[100000]={0};
		int n,i,dis=0,lar=0,temp;
		cin >> n;
		int b[n];
		for(i=0;i<n;i++){
			cin >> b[i];
			a[b[i]-1]++;
		}
		for(i=0;i<100000;i++){
			if(a[i]!=0)
				dis++;
			if(a[i]>lar)
				lar = a[i];
		}
		/*cout <<"Dis : "<<dis<<endl;
		cout <<"large : "<<lar <<endl;*/
		if(lar <= dis){
			dis--;
		}
		
		temp = min(lar,dis);
		cout << temp << endl;
	}	
}
