#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j;
    cin >> n >> m;
    long long int s=0;
    int a[m],b[m];
    for(i=0;i<m;i++)
        cin >> a[i]>>b[i];
    for(i=0;i<m-1;i++)
    for(j=0;j<m-i-1;j++){
        if(b[j]<b[j+1]){
            swap(b[j+1],b[j]);
            swap(a[j+1],a[j]);
        }
    }
   /* for(i=0;i<m;i++)
        cout << a[i]<<" "<<b[i]<<endl;*/
    for(i=0;i<m;i++){
        if(a[i]<n){
            s = s+b[i]*a[i];
            n = n-a[i];
        }
        else{
            s = s+n*b[i];
            break;
        }
    }
    cout << s <<endl;
}
