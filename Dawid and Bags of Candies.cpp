#include<iostream>
using namespace std;
int main()
{
    int a[4],i,j,t;
    for(i=0;i<4;i++)
        cin >> a[i];

    for(i=0;i<3;i++)
        for(j=0;j<3-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    if(a[0]+a[3]==a[1]+a[2])
        cout <<"YES"<<endl;
    else if(a[0]+a[1]+a[2]==a[3])
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;

}
