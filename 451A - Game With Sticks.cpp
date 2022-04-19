#include<iostream>
using namespace std;
int main()
{
	int m,n,c=0,t;
	cin >> m >>n;
	if(m>n)
		t = n;
	else
		t = m;
		
	if(t%2 == 0)
	cout <<"Malvika"<<endl;
	else
	cout <<"Akshat"<<endl;
	
	return 0;
}
