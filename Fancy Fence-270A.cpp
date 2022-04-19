#include<iostream>
using namespace std;
int main()
{
    int n,i,a,t,c=0,j,p;
    cin >> n;
    for(j=0;j<n;j++)
    {
        t=0;
        c=0;
        cin >> a;
        for(i=1;a>=t;i++)
        {
            t=(i*180)/(i+2);
            if(t == a && (t*(i+2))/i==180)
            {
                cout <<"YES"<<endl;
                c=1;
                break;
            }
        }
        if(c == 0)
            cout <<"NO"<<endl;
        c=0;
    }
}
