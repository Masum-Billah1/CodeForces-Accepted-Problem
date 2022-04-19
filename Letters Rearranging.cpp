#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j;
    cin >> t;
    for(j=0; j<t; j++)
    {
        char a[1001],ch;
        cin >> a;
        int i,l,c=0,p=0;
        l = strlen(a);
        ch = a[0];
        for(i=1; i<l; i++)
        {
            if(a[i]!=ch)
                break;
        }
        if(i == l)
        {
            cout << -1 <<endl;
            c = 1;
        }
        if(c == 0)
        {
            for(i=0; i<l; i++)
            {
                if(a[i]!=a[l-1-i])
                    break;
            }
        }
        if(i == l)
            sort(a,a+i);
        if(c == 0)
            cout << a <<endl;
    }
}
