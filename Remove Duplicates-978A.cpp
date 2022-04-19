#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c=0;
    cin >> n;
    int b[n];
    int a[1000]={0};
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    for(i=n-1;i>=0;i--){
        if(a[b[i]-1] == 1){
            b[i] = 0;
        }
        a[b[i]-1]=1;
    }
    for(i=0;i<n;i++){
        if(b[i]!=0){
            c++;
        }
    }
    cout << c <<endl;
    for(i=0;i<n;i++){
        if(b[i]!=0){
            cout << b[i]<<" ";
        }
    }
}
