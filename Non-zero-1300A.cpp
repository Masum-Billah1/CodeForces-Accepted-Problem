#include<bits/stdc++.h>
using namespace std;
int main(){
        int test,i;
        cin >> test;
        while(test--){
                int n,c = 0,s = 0;
                cin >> n;
                int a[n];
                for(i=0;i<n;i++){
                        cin >> a[i];
                        if(a[i]==0){
                                c++;
                                a[i]=1;
                        }
                        s = s+a[i];
                }
                if(s == 0)
                        c++;
                cout << c <<endl;
        }
}
