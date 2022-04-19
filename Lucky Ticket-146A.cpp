#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s1=0,s2=0,i;
    string a;
    cin >> n >> a;
    for(i=0;i<n/2;i++){
        if(a[i]!='4'&&a[i]!='7'){
            cout <<"NO"<<endl;
            return 0;
        }
        s1 = s1+a[i]-'0';
    }
    for(i=n/2;i<n;i++){
        if(a[i]!='4'&&a[i]!='7'){
            cout <<"NO"<<endl;
            return 0;
        }
        s2 = s2+a[i]-'0';
    }
    if(s1 == s2)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;
}
