#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
        int a[3],d=0;
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(a[0]>0){
            d++;
            a[0]--;
        }
        if(a[1]>0){
            d++;
            a[1]--;
        }
        if(a[2]>0){
            d++;
            a[2]--;
        }
        if(a[0]>0 && a[2] > 0){
            d++;
            a[0]--;
            a[2]--;
        }
        if(a[1]>0 && a[2] > 0){
            d++;
            a[1]--;
            a[2]--;
        }
        if(a[1]>0 && a[0] > 0){
            d++;
            a[0]--;
            a[1]--;
        }
        if(a[0]>0 && a[1] > 0 && a[2] >0)
            d++;
        cout << d<<endl;
    }
}
