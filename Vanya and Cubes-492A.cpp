#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,i,t=0;
    cin >> n;
    for(i=1;t<n;i++){
            s = s+i;
            t = t+s;
            //cout << t <<endl;
    }
    if(t == n)
        cout << i-1 <<endl;
    else
        cout << i-2 <<endl;
}
