//dedicated to Fiha
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=1,i,j;
	cin >> n;
	int a[n]={0};
	for(i=2;i*i<n+2;i++){
		c=1;
        for(j=2;i*j<n+2;j++){
        	if(a[i*j-2]==0){
           		a[i*j-2]=c;
            		c++;
            }
        }
    }
    cout << (n+1)/2<<endl;
    for(i=0;i<n;i++)
    	cout << a[i]+1<<" ";
}
