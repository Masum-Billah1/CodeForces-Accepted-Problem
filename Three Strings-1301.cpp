#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b,c;
        int i,cc=0;
        getchar();
        cin >> a >> b >> c;
        int l = a.size();
        for(i=0;i<l;i++){
            if(a[i]==c[i]||c[i]==b[i])
                cc++;
        }
        //cout << l <<cc <<endl;
        if(cc == l)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
