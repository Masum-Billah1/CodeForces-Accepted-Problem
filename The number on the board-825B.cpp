#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[10]={0},sum=0,i,j,c=0;
    string s;
    cin >> n >> s;
    for(i=0;i<s.size();i++){
        a[s[i]-'0']++;
        sum+=s[i]-'0';
    }
     int t = n-sum;
        if(sum>=n)
        cout << 0 <<endl;
        else{
            for(i=0;i<10;i++){
                int f = a[i]*(9-i);
                if(f<t){
                    c+=a[i];
                    t = t-f;
                }
                else{
//                    cout <<"t : " <<t <<endl;
//                    cout <<"9-i : "<<9-i<<endl;
                    double z = t*1.0/(9-i);
                    //cout << "z : "<<z <<endl;
                    c+=ceil(z);
                    break;
                }
            }
            cout << c <<endl;
        }
}
