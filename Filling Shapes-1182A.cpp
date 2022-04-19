#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int len=s.size();
    int i;
    for(i=0; i<len; i++){

        if(s[i]=='1' && s[i+1]== '4' && s[i+2]== '4' ){
            i=i+2;
        }

        else if(s[i] == '1' && s[i+1] == '4'){
            i++;
        }

        else if(s[i]=='1'){
            i=i;
        }

        else{
            cout <<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
