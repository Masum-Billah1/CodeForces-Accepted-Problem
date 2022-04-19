#include<bits/stdc++.h>
using namespace std;
int b[1000000]= {0};
int main()
{
    int c[100000],d=0;
    int k,l,m=0;
    for(k=2; k<1000; k++)
        for(l=2; l*k<1000000; l++)
        {
            b[k*l]=1;
        }
    for(l=2; l<1000000; l++)
    {
        if(b[l]==0)
        {
            c[m]=l;
            m++;
        }
    }
    int n,i,j,f=0,num=0,e;
    cin >> n;
    while(n--)
    {
        long long int a;
        cin >> a;
        double d;
        int b,k=0,e,q=0;
        d = sqrt(a*1.0);
        b = sqrt(a*1.0);
        e = ceil(d);
        int start = 0,finish=78498,mid;
        if(b*b==e*e)
        {
            for(j=0; j<40; j++)
            {
                mid = (start+finish)/2;
                if(c[mid]==e)
                {
                    q = 1;
                    break;
                }
                else if(c[mid]>e)
                    finish = mid-1;
                else
                    start = mid+1;
            }
        }
        if(q == 1)
            cout << "YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
}
