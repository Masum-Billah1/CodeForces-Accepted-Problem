#include<bits/stdc++.h>
using namespace std;
int main(){
        int test,i;
        cin >> test;
        while(test--){
                int n,c=0;
                cin >> n;
                int a[n];
                for(i=0;i<n;i++){
                        cin >> a[i];
                }
                for(i=0;i<n;i++){
                        if(a[i]%2==0)
                        {
                                cout <<1<<endl<<i+1<<endl;
                                c = 1;
                                break;
                        }
                }
        if(c == 0 &&n>=2){
                cout  << 2 <<endl<<1<<" "<<2<<endl;
                c=1;
        }
        if(c == 0){
                cout <<-1<<endl;
        }

        }
}
