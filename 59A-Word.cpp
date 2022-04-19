#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int i,sn=0,ln=0;
	
	char a[101];
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	if(a[i]>='A'&&a[i]<='Z')
		ln++;
	else
		sn++;
	
	if(ln > sn)
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]>='a')
			a[i]=a[i]-32;
		}
	else
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]<='Z')
			a[i]=a[i]+32;
		}
		
	puts(a);
	
}
