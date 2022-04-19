#include<iostream>
using namespace std;
int main()
{
    int year,i;
    int a[4],t;
    cin >> year;

    for(i=year+1;;i++)
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
            cout << i <<endl;
            break;
        }
   }
   return 0;
}
