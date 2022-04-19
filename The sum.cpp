#include<iostream>
using namespace std;
int main()
{
	int f1=0,n,f2=1,fibo,i;
	long long int s=0;
	cin >> n;
	int a[n];
	a[0]=f1;
	a[1]=f2;
	for(i=2;i<=n;i++)
	{
        fibo=f1+f2;
		f1 = f2;
		f2 = fibo;
        a[i]=fibo;
	}
	for(i=0;i<=n;i++)
        s=s+a[i];
    cout << s <<endl;
}

