#include<iostream>
using namespace std;
int main()
{
	int t,j;
	cin >> t;
	long long int a[t][3],i,e,o,s;
	
	for(i=0;i<t;i++)
		for(j=0;j<3;j++)
	{
		cin >>a[i][j];
	}
	for(i=0;i<t;i++){
		o = a[i][2]/2;
		e = a[i][2]-o;
		s = a[i][0]*e-a[i][1]*o;
		cout << s <<endl;		
	}
	return 0;
}
