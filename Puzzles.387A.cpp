#include<iostream>
using namespace std;
int main()
{
	int m,n,i,t,j,c=1000;
	cin >> m >>n;
	int a[n];
	
	for(i=0;i<n;i++)
		cin >>a[i];
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(i=0;i<=n-m;i++)
	{
		t =a[i+m-1]-a[i];
		if(t<c)
		c = t;	
	}
	cout << c<<endl;
}
