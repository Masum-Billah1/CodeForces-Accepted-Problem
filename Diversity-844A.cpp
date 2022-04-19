#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,s=0,i;
    string a;
    cin >> a;
    cin >> k;
    l = a.size();
     if(k>l){
            cout <<"impossible"<<endl;
            return 0;
     }
    int c[26]={0};
    for(i=0;i<l;i++){
        c[a[i]-'a']++;
    }
    for(i=0;i<26;i++){
        if(c[i]!=0)
            s++;
    }
    if(k>s)
        cout << k-s <<endl;
    else
        cout << 0 <<endl;
}
