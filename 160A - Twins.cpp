#include<iostream>
using namespace std;
int main()
{
    int n,i,j,t,t2=0;
    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n-1; i++)
        for(j=0; j<n-(1+i); j++)
        {
            if(a[j]<a[j+1])
            {
                t = a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    t = 0;
    for(i=0; i<n; i++)
    {
        t= t+a[i];
        t2 = 0;
      for(j=i+1; j<n; j++)
            t2 = t2+a[j];
        if(t>t2)
            break;
    }
    cout << i+1 <<endl;

    return 0;
}
