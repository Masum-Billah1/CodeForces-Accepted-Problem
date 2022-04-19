#include<iostream>
using namespace std;
int main()
{
    int n,i,j,t,c=0;
    cin >> n;
    int a[n][2];
    for(i=0;i<n;i++)
        cin >>a[i][0]>>a[i][1];

    for(i=0;i<3;i++)
    {
        t=a[i][0];
        for(j=0;j<n;j++)
        {
            if(t == a[j][1])
            {
                a[i][0]=0;
                c++;
            }

        }
    }
    for(i=0;i<n;i++)
    {
        t=a[i][1];
        for(j=0;j<n;j++)
        {
            if(t == a[j][0])
                c++;
        }
    }
    cout << c<<endl;
}
