#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,s=0,m,c=0,t=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
       if(a[i]==0)
            t++;
    }
    for(i=1;i<n;i++)
     s=s+a[i];
    /*if(t==1)
    {
        cout << n-1 <<endl;
        return 0;
    }*/
    /*if(t==0)
    {
        cout << 0 <<endl;
        return 0;
    }*/

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            for(j=i;j<n;j++)
                if(a[j]==0)
                {
                    for(k=i;k<=j;k++)
                    {
                        if(a[k]==0)
                            a[k]=1;
                        else
                            a[k]=0;
                    }
                    for(m=0;m<n;m++)
                        if(a[m]==1)
                            c++;
                    if(c>s)
                        s =  c;
                    c=0;
                    for(k=i;k<=j;k++)
                    {
                        if(a[k]==0)
                            a[k]=1;
                        else
                            a[k]=0;
                    }
                }
    }
    cout << s <<endl;
}
