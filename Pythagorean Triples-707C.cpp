#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,temp,i,a,b,t;
	cin >> n;
	temp = n;
	if(n == 1 ||n==2){
		cout << -1 <<endl;
		return 0;
	}
	if(n%4 == 0)
		temp = 4;
	else{
		for(i=3;i<(int)sqrt(n);i=i+2){
			if(n%i == 0){
				temp = i;
				break;
			}
		}
	}
	if(temp == n && n%2==0 && temp!=4){
		temp = n/2;
	}
	t = n/temp;
	if(temp == 4){
		a = 3*t;
		b = 5*t;
	}
	else{
		a = (temp*temp)/2;
		b = a+1;
		a = a*t;
		b = b*t;
	}
	cout << a <<" "<<b<<endl;
}
//Dedicated to my mom.
