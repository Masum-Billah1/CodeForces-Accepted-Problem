#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,l,m,t;
    cin >> n;

    m = 1000000000;
    t = 1000000000-n;
    l = sqrt(t);
    while(1)
    {

        for(i=2; i<l; i++)
        {
            int c = 0;
            if(t%i==0)
            {
                c = 1;
                cout << m <<" "<< t << endl;
                return 0;
            }
        }
        m--;
        t--;
    }
}
