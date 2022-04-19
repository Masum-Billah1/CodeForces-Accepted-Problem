#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[20]={0},i,j;
    a[0]=1;
    a[1]=1;

    for(i=2;i*i<20;i++){
        for(j=2;i*j<20;j++){
            cout << i*j <<endl;
            a[i*j]=1;
        }
    }
    for(i=0;i<20;i++)
        if(a[i]==0)
            cout << i<<" ";
}
