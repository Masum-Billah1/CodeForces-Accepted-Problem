#include<iostream>
using namespace std;
int main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		int n,j,k,l,m,c=0;
		cin >> n;
		int ar[n],br[n];
		for(j=0;j<n;j++)
		{
			cin >> ar[j];
			br[j]=ar[j];
		}
			
		for(k=0;k<n;k++)
			for(l=0;l<n;l++)
			{
				if(ar[l]>ar[l+1])
				{
					m= ar[l];
					ar[l] = ar[l+1];
					ar[l+1]=m;
				}
			}
		for(j=0;j<n;j++)
		{
			if(ar[j]!=br[j])
				c++;
		}
		
	cout <<"Case "<< i <<": "<<c/2 <<endl;
	c=0;
	}
}
