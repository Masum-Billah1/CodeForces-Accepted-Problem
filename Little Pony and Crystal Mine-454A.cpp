#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    int d = (n-1)/2;
    for(i=0; i<n/2+1; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j>=d-i&&j<=d+i)
                cout <<'D';
            else
                cout <<'*';
        }
        cout <<endl;
    }
    for(i=n/2-1; i>=0; i--)
    {
        for(j=0; j<n; j++)
        {
            if(j>=d-i&&j<=d+i)
                cout <<'D';
            else
                cout <<'*';
        }
        cout <<endl;
    }
}
