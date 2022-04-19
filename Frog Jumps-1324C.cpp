#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string a;
        int t = 0,c=0,i;
        cin >> a;
        int l = a.size();
        for(i=0;i<l;i++){
            if(a[i]=='L'){
                c++;
            }
            if(a[i]=='R'){
                if(t<c)
                    t = c;
                    c=0;
            }
        }
        if(t<c)
            t = c;
        cout << t+1 <<endl;
    }
}
