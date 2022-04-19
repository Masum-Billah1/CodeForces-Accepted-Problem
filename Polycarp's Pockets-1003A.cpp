#include<iostream>
using namespace std;
int main()
{
    int n,i,j,t=0,c=0;
    cin >> n;
    int a[n];

    for(i=0;i<n;i++)
        cin >> a[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                c++;
        }
        if(t<c)
            t = c;
        c=0;
    }
    cout << t;
}
