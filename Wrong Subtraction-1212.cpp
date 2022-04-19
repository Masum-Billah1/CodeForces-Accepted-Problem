#include<iostream>
using namespace std;
int main()
{
	int num,k,i;
	cin >> num >>k;
	for(i=0;i<k;i++)
	{
		if(num%10 == 0)
			num = num/10;
		else
			num = num-1;	
	}
	cout << num<<endl;
}
