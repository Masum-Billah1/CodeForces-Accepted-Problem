#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,c=0;
    char a[101];
    gets(a);


    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            c=1;
            break;
        }
        else if(i>=1 && i<=strlen(a)-1 && a[i]=='+')
        {
            if((a[i-1]>='1' && a[i-1]<='9')&&(a[i+1]>='1' && a[i+1]<='9'))
                c=1;
        }
    }
    if(c == 1)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

    return 0;

}
