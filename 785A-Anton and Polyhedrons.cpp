#include<iostream>
using namespace std;
int main()
{
	int n,i,j,s = 0;
	cin >> n;
	char a[n][13] ={0};
	
	getchar();
	for(i=0;i<n;i++)
		gets(a[i]);
		
	for(i=0;i<n;i++)
	{
		if(a[i][0] == 'T')
			s = s+4;
		else if(a[i][0]=='C')
			s=s+6;
		else if(a[i][0]=='O')
			s=s+8;
		else if(a[i][0]=='D')
			s=s+12;
		else if(a[i][0]=='I')
			s=s+20;
			
	}
	cout << s <<endl;
}
