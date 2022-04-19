#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,large,in,result=0;
	cin >> n >> m;
	int a,b[101]={0};
	
	for(i=0;i<m;i++){
		large = -1;
		in = 0;
		for(j=0;j<n;j++){
			cin >> a;
			if(a>large){
				large = a;
				in = j;
			}
		}
		b[in+1]++;
	}
	large = -1;
	for(i=1;i<101;i++){
		if(b[i] > large){
			large = b[i];
			result = i;
		}
	}
	cout << result << endl;
}
