#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int n,i,c=0;
	cin >> n;
	getchar();
	char a[101];
	gets(a);
	
	for(i=0;i<n;i++)
	if(a[i]=='U'&&a[i+1]=='R')
	{
		c++;
		i++;
	}
	else if(a[i]=='R'&&a[i+1]=='U'){
		c++;
		i++;
	}
	
	cout << n-c <<endl;	
}
