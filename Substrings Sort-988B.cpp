#include<bits/stdc++.h>
using namespace std;
bool substring(string a,string b){
	int l1 = a.size(),i,k=1;
	int l2 = b.size();
	for(i=0;i<l2;i++){
		if(i+l1 <=l2)
			for(k=0;k<l1;k++){
				if(b[i+k]!=a[k]){
					break;
				}
			}
			if(k==l1)
				return 1;
	}
	return 0;
}
int main(){
	int n,i,l1,l2,j,k;
	cin >> n;
	string str[n];
	for(i=0;i<n;i++){
		cin >> str[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			l1 = str[j].size();
			l2 = str[j+1].size();
			if(l1 > l2){
				swap(str[j],str[j+1]);
			}
		}
	}
	for(i=0;i<n-1;i++){
		bool b = substring(str[i],str[i+1]);
		if(b == 0){
			cout << "NO"<<endl;
			return 0;
		}
	}
	cout <<"YES"<<endl;
	for(i=0;i<n;i++)
		cout <<str[i]<<endl;
}
//Dedicated to Sumaiya Tasnim Fiha.
