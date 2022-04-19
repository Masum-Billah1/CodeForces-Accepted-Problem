#include<bits/stdc++.h>
using namespace std;
string Binary(string str,int num,int n){
	while(num){
		if(num%2 == 1){
			str[n] = '1';
		}
		n--;
		num/=2;
	}
	return str;
}
int main(){
	int n,m,k,i,result=0,j;
	cin >> n >> m >> k;
	int a[m+1];
	for(i=0;i<m+1;i++)
		cin >> a[i];
	string fe(n,'0');
	fe = Binary(fe,a[m],n-1);
	
	for(i=0;i<m;i++){
		string te(n,'0');
		int c = 0;
		te = Binary(te,a[i],n-1);
		/*cout <<"fe : "<< fe <<endl;
		cout <<"te : "<< te <<endl;*/
		for(j=0;j<n;j++){
			if(fe[j] != te[j])
				c++;
		}
	//	cout << "c : "<< c <<endl;
		if(c <= k)
			result++;
	}
	cout << result << endl;
}
//Dedicated to Sumaiya Tasnim Fiha.
