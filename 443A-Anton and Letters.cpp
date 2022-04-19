#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int i,b[26]={0},s=0;
	char a[1001];
	gets(a);
	
	for(i=1;i<strlen(a);i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			b[a[i]-97] =b[a[i]-97]+1; 
		}
	}
	for(i=0;i<26;i++)
		if(b[i]!=0)
			s++;
	cout << s <<endl;
}
