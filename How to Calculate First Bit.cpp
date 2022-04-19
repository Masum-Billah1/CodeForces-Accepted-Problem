#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,t,c=0;
    cin >> m;
    for(i=0;i<m;i++)
    {
        cin >> n;
        c=0;
        for(;n>2;n--)
        for(i=0;n>0;i++)
        {
            t=n/2;
            if(n%2==1 && t%2==1)
                c++;
            n=n/2;
        }
        cout << c <<endl;
    }
}
