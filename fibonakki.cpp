#include<iostream>
using namespace std;
int main()
{
	int f1=0,s=0,n;
	int f2=1;
	int fibo;
	for(int i=0;i<10;i++)
	{
			fibo=f1+f2;
		f1 = f2;
		f2 = fibo;

		cout <<fibo <<" ";
	}
}
