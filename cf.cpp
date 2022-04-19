#include<iostream>
using namespace std;
int main()
{
	int a,i,c=1,t=0;
	cin >> a;
	int arr[a];
	
	for(i=0;i<a;i++)
		cin >> arr[i];
	for(i=0;i<a-1;i++)
	{
		if(arr[i]<arr[i+1])
			c++;
		else
		{
			if(c>t)
			t = c;
			c=1;	
		}
	}
	if(t==0)
		t =c;
	cout << t <<endl;	
}
