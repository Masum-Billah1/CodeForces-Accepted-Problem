#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,i,j,c=0;
	cin >> n;
	getchar();
	char a[n][6];
	
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<n;i++)
		{
			if(a[i][0]=='O'&&a[i][1]=='O')
			{
				cout <<"YES\n";
				a[i][0]='+';
				a[i][1]='+';
				c = 1;
				break;
			}
			else if(a[i][3]=='O'&&a[i][4]=='O')
			{
				cout <<"YES\n";
				a[i][3]='+';
				a[i][4]='+';
				c = 1;
				break;
			}
		}
	if(c == 0)
		cout <<"NO"<<endl;	
	else if(c == 1)
	for(i=0;i<n;i++)
	{
		puts(a[i]);
	}
	
}
