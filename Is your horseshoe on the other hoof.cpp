#include<iostream>
using namespace std;
int main()
{
	int i,c=0,j,a[4];
	for(i=0;i<4;i++)
		cin >> a[i];
	
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
		{
			if(a[i]==a[j]&&i!=j&&a[j]!=0)
			{
				c++;
				a[j]=0;
			}
		}
	cout << c <<endl;
}
