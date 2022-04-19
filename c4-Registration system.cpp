#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char a[100000][33];
int main()
{
	int n,c=0,i,j;
	cin >> n;
	getchar();
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	cout << "OK\n";
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
	{	
		if(strcmp(a[i],a[j])==0)
			c++;	
	}
	if(c>0)
	{
	printf("%s",a[i]);
	cout << c<<endl;
	}	
	if(c == 0)
	cout <<"OK\n";
	c = 0;
	}
}

