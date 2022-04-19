#include<iostream>
using namespace std;
int main()
{
	int n,i,j,s[3],t=1;
	cin >> n;
	int a[n];
	
	for(i=0;i<n;i++)
		cin >> a[i];
	s[1]=0;
	s[2]=0;	
	for(i=0,j=n-1;i<=j;)
	{
		if(a[i]>a[j])
		{
			s[t] = s[t]+a[i];
			i++;
			a[i-1]=0;
		}
		else{
			s[t] = s[t]+a[j];
			j--;
			a[j+1]=0;
		}
			
		if(t == 1)
			t=2;
		else
			t=1;
	}
	cout << s[1]<<" "<<s[2];
	
}
