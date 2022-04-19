#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j,n,x,c=0,t;
	cin >> n >> x;
	if(x>n)
		t = n;
	else
		t = x;
	for(i=1;i<=n;i++)
		for(j=1;j<=t;j++)
			if(i*j==x)
			{
				c++;
			}		
	cout << c <<endl;
}
