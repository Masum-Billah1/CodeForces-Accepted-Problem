#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    int a[n],b[n],ca=0,cb=0;

    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        cin >> b[i];
    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            a[i]=0;
            b[i]=0;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]==1)
            ca++;
        if(b[i]==1)
            cb++;
    }
    //cout << ca <<endl;
    if(ca == 0)
        cout <<-1<<endl;
    else{
        int d = cb/ca;
            cout << d+1 <<endl;
    }

}
