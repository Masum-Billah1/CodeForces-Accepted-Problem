#include<bits/stdc++.h>
using namespace std;
int main(){
	int v1,v2,t,d,i,s=0;
	cin >> v1 >> v2 >> t >> d;
	if(v1>v2)
		swap(v1,v2);
	s = v1;
	for(i=2;i<=t;i++){
		s = s+d;
		if(s>v2)
			break;
	}
		
}
