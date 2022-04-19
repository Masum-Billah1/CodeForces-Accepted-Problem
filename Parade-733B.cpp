#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a,b,d,i1=0,i2=0,l1=0,l2=0,s1=0,s2=0,i;
	for(i=0;i<n;i++){
		cin >> a >> b;
		d = abs(a-b);
		if(a>b){
			s1=s1+d;
			if(l1<d){
				l1=d;
				i1=i;
			}
		//	cout << "s1 : "<<s1<<endl;
		}
		else{
			s2=s2+d;
			if(l2<d){
				l2=d;
				i2=i;
			}
		//	cout << "s2 : "<<s2<<endl;
		}
	}
	if(s1==0||s2==0){
		cout << 0 <<endl;
		return 0;
	}
	s2=s2+l1;
	s1=s1+l2;
	if(s1>s2){
		cout << i2+1<<endl;
	}
	else
		cout << i1+1<<endl;
}
