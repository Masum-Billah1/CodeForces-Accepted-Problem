#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int l,lsum,ksum,k,i,max=0;
	cin >> k;
	long long int sum=0;
	int a[26];
	for(i=0;i<26;i++){
		cin >> a[i];
		if(a[i]>max)
			max = a[i];
	}	
	l = s.size();
	ksum = l+k;
	ksum = (ksum*(ksum+1))/2;
	lsum = (l*(l+1))/2;
	ksum = ksum-lsum;
	
	for(i=0;i<l;i++){
		sum = sum+(i+1)*a[s[i]-'a'];
	}
	sum = sum+max*ksum;
	cout << sum <<endl;
	
}
