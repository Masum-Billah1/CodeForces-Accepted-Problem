#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        int n,s=0,c=0,mnm = 0,t;
        double temp;
        cin >> n;
        int a[n];
        for(i=0; i<n; i++)
            cin >> a[i];

        for(i=0; i<n; i++)
        {
            if(a[i]!=-1)
            {
                s = s+a[i];
                c++;
            }
        }
        if(c == 0)
            t = 0;
        else
        {
            temp = s*1.0/c;
            t = temp*2;
            if(t%2 ==1)
                t = (t+1)/2;
            else
                t = t/2;
        }
        for(i=0; i<n; i++)
            if(a[i]==-1)
                a[i]=t;

        for(i=0; i<n-1; i++)
        {
            if(mnm<=abs(a[i]-a[i+1]))
                mnm = abs(a[i+1]-a[i]);
        }
        cout << mnm <<" "<<t<<endl;
    }
}
