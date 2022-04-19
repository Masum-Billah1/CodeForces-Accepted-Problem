#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int len=s.length();
	//int len=s.size();
	//reverse(s.begin(),s.end());//reverse
	s.push_back('1');
	//s.pop_back();
	cout<<s<<endl;
	cout <<len<<endl;
}
