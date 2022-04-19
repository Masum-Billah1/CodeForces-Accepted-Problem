#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    while(n--){
        int a;
        int t = 0,c = 0;
        cin >> a;
        string b;
        cin >> b;
        for(i=0;i<b.size();i++){
            //cout << b[i]<<endl;
            if(b[i]=='A')
                break;
        }
        //cout <<"Break"<<endl;
        i++;
        for(;i<b.size();i++){
            //cout << b[i]<<endl;
            if (b[i] == 'P'){
                c++;
            }
            else if(b[i] == 'A'){
                if(t<=c){
                    t = c;
                }
                c = 0;
            }
        }
        if(t<=c){
            t = c;
        }
        cout << t <<endl;
    }
}
