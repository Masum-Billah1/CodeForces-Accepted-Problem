#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,f1=1,f2=1,s=1,i;
	cin >>n;
	
	for(i=1;i<=n;i++)
	{
		if(i==s)
		{
			cout <<'O';
			s=f1+f2;
			f1=f2;
			f2 = s;	
		}
		else
			cout <<'o';
	}
	cout <<endl;	
}
