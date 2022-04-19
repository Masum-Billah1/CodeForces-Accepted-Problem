#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char a[101],b[101];
	gets(a);
	gets(b);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='0'&&b[i]=='0')
			cout <<0;
		else if(a[i]=='1'&&b[i]=='1')
			cout <<0;
		else
			cout <<1;
	}
	cout <<endl;
}
