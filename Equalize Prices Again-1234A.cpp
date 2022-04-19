#include<bits/stdc++.h>
using namespace std;
int main(){
        int test;
        cin >> test;
        while(test--){
                int n,s=0;
                cin >> n;
                int a[n];
                for(int i=0;i<n;i++){
                        cin >> a[i];
                        s = s+a[i];
                }
                int d =ceil(s*1.0/n);
                cout << d<<endl;
                //printf("%d\n",d);
        }
}
