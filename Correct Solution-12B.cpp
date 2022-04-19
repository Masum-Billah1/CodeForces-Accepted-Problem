#include<bits/stdc++.h>
using namespace std;
int main(){
	string main,reply;
	int l;
	cin >> main >> reply;
	l=main.size();
	sort(main.begin(),main.end());
	if(main[0]=='0' && l>1){
		swap(main[0],main[1]);
	}
	if(main == reply)
		cout <<"OK"<<endl;
	else
		cout <<"WRONG_ANSWER"<<endl;
}
