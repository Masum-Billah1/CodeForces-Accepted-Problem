#include<iostream>
using namespace std;
int main()
{
	int n,i,a;
	cin >> n;
	long long int d[n][2],b;
	for(i=0;i<n;i++)
	{
		cin >> d[i][0]>>d[i][1];
	}
	for(i=0;i<n;i++)
	{
		a = d[i][0]%10;
		if(b%2 == 0)
		{
			cout << (a*a)%10 << endl;
		}
		else 
			cout << a <<endl;
	}
}
