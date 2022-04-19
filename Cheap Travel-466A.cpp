#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,t,m,s = 0;
	cin >>a >> b>>c>>d;
	t= d/b;
	m = a%b;
	if(t>=c)
		s = a*c;
	else if(a%b == 0)
	{
		s = (a*d)/b;
		if((a*b)%b!=0)
		s++;
	}
	else
		{
		s = ((a-m)*d)/b;
		if(m*c < d)
			s=s+m*c;
		else
			s=s+d;
	}
	cout <<s;
}
