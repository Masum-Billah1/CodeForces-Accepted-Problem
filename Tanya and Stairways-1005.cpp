#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cin >> n;
	int a[n];
	
	for(i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==1)
			c++;
	}
	cout << c<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]==1&&i!=0)
			cout <<a[i-1]<<" ";
		if(i==n-1)
			cout <<a[i]<<endl;
	}	
}
