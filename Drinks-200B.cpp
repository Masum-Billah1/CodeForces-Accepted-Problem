#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,s=0,i;
	double f;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s=s+a[i];
	}
	f=(double)s/(double)n;

	printf("%0.12f\n",f);
}
