#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,c=0,i,l;
    cin >> p >> q;
    l=-q;
    if(q>=0)
        for(i=20;i>=0;i--)
        {
            while(p>=((pow(2,i))+q))
            {
                cout << p <<" "<< i <<endl;
                c++;
                p = p-((pow(2,i))+q);
            }
        }
    else
        for(i=20;i>=0;i--)
        {
            cout << p <<" "<< i <<endl;
            while(p>=((pow(2,i))-l))
            {
                c++;
                p = p-((pow(2,i))-l);
            }
        }

    cout << c <<endl;
}
