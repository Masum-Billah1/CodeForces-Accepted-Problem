#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,t,i,ct=0;
	cin >> n>>a>>b>>c;
	if(a<b)
	{
		t=a;a=b;b=t;		
	}
	
	if(a<c)
	{
		t=a;a=c;c=t;
	}
	if(b<c)
	{
		t=b;b=c;c=t;	
	}
	while(n>=c)
	{
		if(n>c&&n-c>=c)
		{
			ct++;
			n=n-c;
		}
		else if(n==c)
		{
			ct++;
			break;
		}
		else if(n>b&&n-b>=b)
		{
			ct++;
			n=n-b;
		}
			else if(n==b)
		{
			ct++;
			break;
		}
		else
		{
			ct=ct+n/a;
			break;
		}
	}
	cout << ct<<endl;	
}
