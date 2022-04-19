#include<iostream>
using namespace std;
int main()
{
	int n,i,j,c=0;
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
		cin >>a[i];
	if(n == 1)
		cout <<0<<endl;
	else{
		for(i=1;i<n;i++)
		{
			int ts = 0,tb = 0;
			for(j=i-1;j>=0;j--)
			{
				if(a[i]<a[j])
				tb++;
				else if(a[i]>a[j])
				ts++;
			}
			if(ts==i)
				c++;
			else if(tb == i)
				c++;
		}
		cout << c <<endl;
	}
}
