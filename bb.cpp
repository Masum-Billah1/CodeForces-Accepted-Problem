#include<bits/stdc++.h>
using namespace std;
int main(){
	int v1,v2,t,d,l1,l2,s=0,i;
	cin >> v1 >> v2 >> t >> d;
	if(v1>v2){
		swap(v1,v2);
	}
	l1=v1;
	l2=v2;
	s=v1+v2;
	for(i=2;i<t;i++){
		if(l1>=l2){
			l2=l2+d;
			s = l2+s;
			i++;
		}
		if(i==t)
			break;
		l1= l1+d;
		s = s+l1;
	}
	cout << s <<endl;
}
