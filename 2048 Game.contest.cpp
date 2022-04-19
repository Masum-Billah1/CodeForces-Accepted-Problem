#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a[100],b[100],k=0,t,l,tmp,s=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        k=0;
        int m;
        cin >> m;
        for(j=0;j<m;j++){

            cin >> b[j];

        if(b[j]<=2048)
            {
                a[k]=b[j];
                k++;
            }
        }
        t=k;
    for(j=0;j<t-1;j++)
        for(l=0;l<t-1-j;l++)
        {
            if(a[l]<a[l+1])
            {
                tmp = a[l];
                a[l] = a[l+1];
                a[l+1]=tmp;
            }

        }
    s=0;
    for(j=0;j<t;j++)oI
    {
        s=s+a[j];
        if(s == 2048)
        {
            cout <<"YES"<<endl;
            break;
        }
    }
    if(j==t)
        cout <<"NO"<<endl;

    }
}
