#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,i;
	stack <int> a;
	for(i=0;i<10;i++)
	{
		cin >> b;
		a.push(b);//take input
	}
	/*for(i=0;i<10;i++)
	{
		cout <<a.top()<<endl;//return a value
		a.pop();//delete 
	}*/
	cout << a.size()<<endl;
	while(!a.empty())
	{
		cout <<a.top()<<endl;//return a value
		a.pop();
	}
}
