#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        string a;
        int i,s=0,e=0;
        cin >> a;
        int l = a.size();

        for(i=0;i<l;i++){
            if(a[i]=='1'){
                s = i;
                break;
            }
        }
        for(i=l-1;i>=0;i--){
            if(a[i]=='1'){
                e = i;
                break;
            }
        }
        int c = 0;
        for(i=s;i<e;i++)
        {
            if(a[i]=='0')
                c++;
        }
        cout << c <<endl;
    }

}
