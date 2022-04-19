#include<iostream>
using namespace std;
int main()
{
	int n,i,t=0,s=0;
	cin >> n;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cin >>a[i];
		if(a[i]>t)
		t =a[i];
	}
	for(i=0;i<n;i++)
	{
		s=s+(t-a[i]);
	}
	cout <<s<<endl;
}
