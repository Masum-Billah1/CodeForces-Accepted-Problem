#define ll long long int
#define na 1000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c,i,j;
	cin >> r >> c;
	if(r == c && r == 1){
		cout << 0 << endl;
		return 0;
	}
	else if(c == 1){
		for(i=0;i<r;i++){
			cout << i+2<<endl;
		}
		return 0;
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==0){
				cout << j+2<<" ";
			}
			else{
				cout <<(j+2)*(c+1+i)<<" ";
			}
		}
		cout << endl;
	}
}

