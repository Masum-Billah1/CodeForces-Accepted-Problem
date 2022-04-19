#define ll long long int
#define na 1000000000
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k,s=0;
	for(i=2;i*j*k<=na;i++){
		for(j=2;(i*j*k<=na && j!=i);j++){
			for(k=2;(k!=i && k!=j && i*j*k<=na);k++){
				//cout << i*j*k<<" ";
				s++;
			}
			k = 2;
		}
		j = 2;
	}
	cout << s << endl;
}

