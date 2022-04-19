#include<iostream>
using namespace std;
int main()
{
	int n,s =0,i,t=0,m;
	cin >>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		s=s+a[i];
	}
	if(s%2 == 0)
		m=s/2;
	else
		m=(s+1)/2;
	for(i=0;i<n;i++)
	{
		t = t+a[i];
		if(t>=m)
		{
			cout <<i+1<<endl;
			break;
		}
	}
}
