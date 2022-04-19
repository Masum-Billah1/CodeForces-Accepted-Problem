#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int a[4],n=0,e=0,j=0,t=0;
    cin >> s;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]=='n')
            n++;
        if(s[i]=='e')
            e++;
        if(s[i]=='i')
            j++;
        if(s[i]=='t')
            t++;
    }
    if(n<5)
        a[0]=n/3;
    else{
        n--;
        a[0]=n/2;
    }
    a[1]=e/3;
    a[2]=j;
    a[3]=t;
    sort(a,a+4);
    cout <<a[0]<<endl;
}
