#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,t,cnt[4]={0};
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n-1; i++)
        for(j=0; j<n-(1+i); j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    for(i=0;i<n;i++)
    {
        if(a[i]==4)
            c++;
        else
        {
            cnt[a[i]]=cnt[a[i]]+1;
        }
    }
    cout <<"c4 = "<<c <<endl;
    for(i=1;i<4;i++)
    {
        cout << cnt[i]<<" ";
    }
    cout <<endl;
    c=c+cnt[2]/2;
    cnt[2]=cnt[2]%2;
    cout <<"c2 = "<<c <<endl;
    if(cnt[1]>cnt[3])
    {
        c=c+cnt[3];
        cnt[1]=cnt[1]-cnt[3];
        cnt[3]=cnt[3]-cnt[3];
    }
    else if(cnt[1]<=cnt[3])
    {
        c=c+cnt[1];
        cnt[3]=cnt[3]-cnt[1];
        cnt[1]=cnt[1]-cnt[1];
    }
    cout <<"c3 = "<<c <<endl;
        if(cnt[1]>=1)
    {
        c=c+cnt[2];
        cnt[2]=cnt[2]-cnt[2];
        cnt[1]=cnt[1]-cnt[2];
        c=c+cnt[1]/4+1;

    }
    for(i=2;i<4;i++)
    {
        cout << cnt[i]<<" ";
        c=c+cnt[i];
    }
    cout <<endl;
    cout << c;
    return 0;
}
