#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,m,i,j,c=0;
	char t;
	cin >> n >> m;
	char a[n+1];
	getchar();
	gets(a);
	
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
			if(a[i]=='B'&&a[i+1]=='G')
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				i++;
			}
			
			
	puts(a);
	
}

