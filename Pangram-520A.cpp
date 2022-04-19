#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,i,c = 0;
	cin >> n;
	getchar();
	char a[101];
	gets(a);
	int b[26]={0};
	
	for(i=0;i<n;i++)
	if(a[i]<'a')
		a[i]=a[i]+32;
			
	for(i=0;i<n;i++){
		b[a[i]-97]=b[a[i]-97]+1;
	}
	
	for(i=0;i<26;i++){
		if(b[i]==0)
		{
			cout <<"NO\n";
			break;
		}
	}
	if(i == 26)
		cout <<"YES\n";
	
}
