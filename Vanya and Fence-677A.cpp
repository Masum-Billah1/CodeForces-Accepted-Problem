#include<iostream>
using namespace std;
int main()
{
	int n,t,s=0,i;
	cin >> n >> t;
	int a[n];
	for(i=0;i<n;i++)
		cin >>a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>t)
			s=s+2;
		else
			s++;
	}
	cout << s <<endl;
}
