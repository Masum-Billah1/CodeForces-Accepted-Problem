#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	if(n>m){
	cout <<m<<" ";
	m = n-m;
	}
	else
	{
		cout <<n <<" ";
		m = m-n;
	}
	cout <<m/2;
	
}
