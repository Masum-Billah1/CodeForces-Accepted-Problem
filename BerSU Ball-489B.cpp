#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,s1=0,s2=0,j=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >> a[i];
		
	int m;
	cin >> m;
	int b[m];
	for(i=0;i<m;i++)
		cin >> b[i];
	sort(a,a+n);
	sort(b,b+m);
	for(i=0;i<n;i++){
		while(b[j]<a[i]-1){
			j++;
			if(j==m)
				break;
		}
		if(j == m)
			break;
		if(abs(b[j]-a[i])<2){
			s1++;
			j++;
			if(j==m)
				break;
		}
	}
	j = m-1;
	for(i=n-1;i>=0;i--){
		while(b[j]>a[i]+1){
			j--;
			if(j == -1)
				break;
		}
		if(j == -1){
			break;
		}
		if(abs(a[i]-b[j])<2){
			s2++;
			j--;
			if(j == -1)
				break;
		}
	}
	cout <<s1 <<endl;
}

