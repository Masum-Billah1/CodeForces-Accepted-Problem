#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,t,c=0;
    long long int s=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
            if(a[i]%2==1){
                t = a[i];
                c++;
            }
          s = s+a[i];
    }
    //cout << c <<endl;
    if(c%2 == 0)
        cout << s <<endl;
    else{
        for(i=0;i<n;i++){
            if(a[i]%2==1 && a[i]<t)
                t = a[i];
        }
        s = s-t;
        cout << s <<endl;
    }
}
