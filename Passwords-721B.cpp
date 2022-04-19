#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k;
	cin >> n >> k;
	int a[n]={0},best=0,worst=0,l,lenth,temp;
	string str[n+1];
	for(i=0;i<=n;i++){
		cin >> str[i];
	}
	lenth = str[n].size();
	for(i=0;i<n;i++){
		l = str[i].size();
		if(l<lenth)
			worst++;
		if(l<=lenth && str[i]!=str[n])
			best++;
	}
	best++;
	temp = worst/k;
	worst = worst+temp*5;
	temp = (best-1)/k;
	best = best+temp*5;
	worst++;
	cout << worst <<" "<<best<<endl;
} 
