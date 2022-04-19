#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1,str2;
	cin >> str1 >> str2;
	int x1,y1,x2,y2,d1,d2,t,t2,i;
	x1 = str1[0]-'a'+1;
	x2 = str2[0]-'a'+1;
	y1 = str1[1]-'0';
	y2 = str2[1]-'0';
	d1 = abs(x1-x2);
	d2 = abs(y1-y2);
	//cout <<"d1 : "<<d1<<"d2 : "<<d2<<endl;
	t = max(d1,d2);
	t2 = min(d1,d2);
	cout << t <<endl;
	for(i=0;i<t2;i++){
		if(x1<x2){
			cout <<'R';
			x1++;
		}
		else{
			cout <<'L';
			x1--;	
		}
		if(y1<y2){
			cout <<'U';
			y1++;
		}
		else{
			cout <<'D';
			y1--;
		}
		cout <<endl;	
	}
	for(i=t2;i<t;i++){
		if(y1>y2){
			cout <<'D'<<endl;
			y1--;
		}
		if(y1<y2){
			cout <<'U'<<endl;
			y1++;
		}
		if(x1>x2){
			cout <<'L'<<endl;
			x1--;
		}
		if(x1<x2){
			cout <<'R'<<endl;
			x1++;
		}
	}
}
