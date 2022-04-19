#include<iostream>
using namespace std;
int main()
{
	int n,x,y,i,c=0;
	cin >> n;
	int d[n]={0};
	cin >> x;
	int a[x];
	d[n]=0;
	for(i=1;i<=x;i++)
	{
		cin >> a[i];
		d[a[i]]=d[a[i]]+1;
	}
	cin >> y;
	
	int b[y];
	for(i=1;i<=y;i++)
	{
	cin >> b[i];
	d[b[i]]=d[b[i]]+1;
	}
	for(i=1;i<=n;i++)
	{
		if(d[i]!=0)
		c++;
	}
	
	if(c==n)
	cout <<"I become the guy."<<endl;
	else
	cout <<"Oh, my keyboard!"<<endl;	
}
