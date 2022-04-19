#include<iostream>
using namespace std;
int main()
{
    int d,s,i,j,t,w,c;
        cin >> w;
    while(w--)
    {
        j=0;
        c=0;
        cin >> d >>s;
        int m=d;
        int n=s;
        int a[100000]={0};
        for(i=0;m>0;i++)
        {
            m=m-2;
            n=n-m;
            if((n/2)>9){
                a[j]=9;
                j++;
                n=n-18+m;
                //cout << n<<endl;
            }
        if(n==1)
        {
           a[j]=1;
           j++;
        }
            else
            {
                a[j]=n/2;
                n=m;
                j++;
            }
        }
        if(d%2 == 1)
        {
           d++;
           c=1;
        }
        for(j=0;j<(d/2);j++)
            cout << a[j];
        if(c==1)
            j--;
        for(j=j-1;j>=0;j--)
            cout << a[j];
        cout <<endl;
    }

}
