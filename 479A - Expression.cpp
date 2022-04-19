#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,c,d,t;
	cin >> a >> b >> c;
	
	d = a+b+c;
	t = d;

	d = a+b*c;
	if(t<d)
	t = d;
	
	d = a*b+c;
	if(t<d)
	t = d;
	
	d = a*b*c;
	if(t<d)
	t = d;
	
	d = (a+b)*c;
	if(t<d)
	t = d;
	
	d = a*(b+c);
	if(t<d)
	t = d;
	
	cout << t<<endl;
	
}
