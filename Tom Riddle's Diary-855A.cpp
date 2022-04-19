#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int n,i,c,j;
	cin >> n;
	getchar();
	char a[n][101];
	for(i=0;i<n;i++)
		gets(a[i]);
	
	for(i=0;i<n;i++)
	{
		c = 0;
		for(j=-1;j<i;j++)
		{
			if(strcmp(a[i],a[j])==0)
			{
				c=1;
			}
		}
		if(c == 1)
			cout << "YES"<<endl;
		else
			cout <<"NO"<<endl;
	}
	return 0;
}
