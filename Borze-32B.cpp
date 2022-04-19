#include<bits/stdc++.h>
using namespace std;
int main(){
        string a;
        cin >> a;
        int len = a.size(),i;
        for(i=0;i<len;i++){
                if(a[i]=='-'&&a[i+1]=='.')
                {
                        cout << 1;
                        i++;
                }
                else if(a[i]=='-'&&a[i+1]=='-')
                {
                        cout << 2;
                        i++;
                }
                else
                        cout << 0;
        }
        cout <<endl;
}
