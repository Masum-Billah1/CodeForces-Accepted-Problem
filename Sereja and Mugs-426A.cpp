#include<iostream>
using namespace std;
int main()
{
    int n,s,i,j,t;
    cin >> n >> s;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
    j=0;
    for(i=0;i<n-1;i++)
        j=j+a[i];
    if(j<=s)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;
    }
