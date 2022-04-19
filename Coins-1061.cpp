#include<iostream>
using namespace std;
int main()
{
	int n,s,t;
	cin >> s >> n;
	if(n%s == 0)
		t = n/s;
	else
		t = n/s+1;
	cout <<t <<endl;
}
