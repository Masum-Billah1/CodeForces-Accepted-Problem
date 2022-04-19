#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,i,s = 0;
        cin >> n;
        string s;
        cin >> s;
        c1 = 0,c2 = 0;
        for(i=0;i<n;i++){
                if(a[i]==')')
                        c1++;
                else{
                        if(a[i]=='(')
                                c2++;
                }
        }
        if(c1 !=c2){
                cout <<-1 <<endl;
                return 0;
        }k
}
