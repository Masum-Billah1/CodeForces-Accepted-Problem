#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin >> str;
	int l,i;
	l = str.size();
	for(i=0;i<l;i++){
		if(str[i]=='1'&&str[i+1]=='4'&& str[i+2]=='4'){
			i=i+2;
		}
		else if(str[i]=='1'&&str[i+1]=='4'){
			i++;
		}
		else if(str[i]=='1'){
			i=i;
		}
		else{
			cout <<"NO"<<endl;
			return 0;
		}
	}
	cout <<"YES"<<endl;
	
}
