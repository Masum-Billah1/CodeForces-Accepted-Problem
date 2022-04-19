#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char a[201];
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
			i=i+2;
		else{
			cout <<a[i];
			if(a[i+1]=='W'&&a[i+2]=='U'&&a[i+3]=='B')
			cout <<" ";
		}
	}
	cout <<endl;
}
