//dedicated to Fiha
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,c;
	cin >> n;
	for(i=0;i<n+1;i++){
		c=0;
		for(j=0;j<(n*4)+1;j++){
			if(j%2==0 && j>=(n-i)*2 && j<=(n+i)*2){
				cout << c;
				if(j>=(n-i)*2 && j<n*2-1)
					c++;
				else
					c--;
				if(c==-1)
					break;
			}
			else
				cout <<' ';
		}
		cout <<endl;
	}
	for(i=n-1;i>=0;i--){
		c=0;
		for(j=0;j<(n*4)+1;j++){
			if(j%2==0 && j>=(n-i)*2 && j<=(n+i)*2){
					cout << c;
				if(j>=(n-i)*2 && j<n*2-1)
					c++;
				else
					c--;
				if(c==-1)
					break;
			}
			else{
				cout <<' ';
			}
		}
		cout <<endl;
	}
}
