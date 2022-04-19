#include<iostream>
using namespace std;
int main()
{
    int year,i,m,o=0;
    int a[8],t;
    cin >> year>>m;

    for(i=year;i<=m;i++)
    {
        int b[10]={0},c =0;
        t = i;
        for(int j=0;t>0;j++)
        {
            a[j]=t%10;
            t = t/10;
            b[a[j]]++;
        }
        for(int j=0;j<10;j++)
        {
            if(b[j]>1)
                c++;
        }
        if(c == 0)
        {
            o=1;
            if(i<=m)
                cout << i <<endl;
            break;
        }
   }
   if(o == 0)
        cout << -1 <<endl;
   return 0;
}
