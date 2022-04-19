#include<iostream>
using namespace std;
int main()
{
    int n,i,b,t,s=0,cnt=0,j,c;
    cin >> n>>b;
    int a[n-1][2];

    for(i=0;i<n-1;i++)
    {
        cin >> a[i][0]>>a[i][1];
        if(a[i][0]==1)
            cnt++;
    }
    for(j=0;j<cnt;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {

        }
        if(s<c)
            s = c;
    }
    cout << s+b<<endl;

}
