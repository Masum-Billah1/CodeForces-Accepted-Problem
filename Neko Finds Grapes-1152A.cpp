#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n],b[m],i,ae=0,ao=0,be=0,bo=0,s;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
            ae++;
        else
            ao++;
    }
    for(i=0; i<m; i++)
    {
        cin >> b[i];
        if(b[i]%2==0)
            be++;
        else
            bo++;
    }
    s = min(ae,bo)+min(be,ao);
    s=min(s,m);
    cout << s <<endl;
}

