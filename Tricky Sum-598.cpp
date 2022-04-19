#include<iostream>
using namespace std;
long long int tm(long long int n)
{
	int i,j=0;
	long long int s,t=0;
		for(j=1;j<=n;j=2*j)
	{
		t=t+j;
	}	
	s = n*(n+1)/2-(2*t);

	return s;
}
int main()
{
	int i=0;
	int n;
	long long int a;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		cout << tm(a)<<endl;
	}
	return 0;
}
