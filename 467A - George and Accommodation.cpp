#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin >> n;
    int a[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
    {
        cin >> a[i][j];
    }
    for(i=0;i<n;i++)
        {
            if(a[i][1]-a[i][0]>=2)
                c++;
                //cout <<c<<endl;
        }
    cout <<c<<endl;
}
