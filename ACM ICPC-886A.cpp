#include<bits/stdc++.h>
using namespace std;
int main(){
        int a[6],i,j,k,c=0,s=0;
        for(i=0;i<6;i++){
                cin >> a[i];
                s = s+a[i];
        }
        if(s%2 != 0){
                        c=1;
                cout << "NO"<<endl;
                return 0;
        }
        for(i=0;i<6;i++)
                for(j=0;j<6,i!=j;j++)
                        for(k=0;k<6,i!=k,j!=k;k++){
                                if((a[i]+a[j]+a[k])*2==s){
                                        cout << "YES"<<endl;
                                        c=1;
                                        return 0;
                                        }
                        }
        if(c==0)
                cout << "NO"<<endl;

}
