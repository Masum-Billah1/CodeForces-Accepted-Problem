#include<iostream>
using namespace std;
int main()
{
	int n,i,j,s;
	cin >> n;
	int a[n][n];
	
	for(j=0;j<n;j++)
	{
		s=0;
		for(i=0;i<n;i++)
		{
			if(j==0)
			a[j][i]=1;
			else{
			a[j][i]=s+a[j-1][i];
			s=a[j][i];
			}
		}
	}
	cout <<a[n-1][n-1]<<endl;
	
}
