#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	cin >> n >> m;
	int a[m];
	for(i=0;i<m;i++)
	cin >> a[i];
	
	long long int s = a[0]-1;
	
	for(i=1;i<m;i++)
	{
		if(a[i-1]<=a[i])
			s = s+a[i]-a[i-1];
		else
			s = s+(n+a[i]-a[i-1]);
	}
	cout <<s<<endl;	
}
