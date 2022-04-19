#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,j;
    cin >> test;
    for(j=0;j<test;j++)
    {
        long long int a,w,t=0,c=0,i,m;
        cin >> w;
        t = w;

        if(w==2||w%2==1)
        {
            printf("Case %d: Impossible\n",j+1);
            continue;
        }
        else
        {
            while(t>2)
            {
                m = t;
                t = t/2;
                if(t*2 != m)
                    break;
                if(t == 2)
                {
                    printf("Case %d: Impossible\n",j+1);
                    c = 1;
                }
            }
        }


        if(c == 0)
            for(i=2;;i=i+2)
            {
                if(w!=2 && w%i==0 && (w/i)%2==1)
                {
                    printf("Case %d: %lld %lld\n",j+1,w/i,i);
                    break;
                }
            }
    }
}
