#define ll long long
#define na 1000000
#define seti set<int>
#define setl set<ll>
#define veci vector<int>
#define vecl vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include<bits/stdc++.h>
using namespace std;
int main(){
	IOS;
	int two[]={6,2,4,8},sum=0,l,temp=1,lt,ld,i;
	int three[]={1,3,9,7};
	int four[]={6,4};
	string str;
	cin >> str;
	l = str.size();
	if(str.size()==1)
		lt = str[l-1]-'0';
	else
		lt = (str[l-2]-'0')*10+str[l-1]-'0';
	temp+=two[lt%4];
	//cout <<"temp : "<<temp<<endl;
	temp+=three[lt%4];
	//cout <<"temp : "<<temp<<endl;
	temp+=four[lt%2];
	//cout <<"temp : "<<temp<<endl;
	cout << temp%5<<endl;
}

