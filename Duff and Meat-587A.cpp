#include<iostream>
using namespace std;
int main()
{
    int n,i,t,s=0;
    cin >> n;
    int a[n][2];

    for(i=0;i<n;i++)
        cin >> a[i][0]>>a[i][1];

    t=a[0][1];
    for(i=0;i<n;i++)
    {
        if(a[i][1]<=t)
        {
            s = s+a[i][0]*a[i][1];
            t = a[i][1];
        }
        else
        {
            s = s+a[i][0]*t;
        }
    }
    cout << s <<endl;
}
