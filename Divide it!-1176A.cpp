#include<iostream>
using namespace std;
int main()
{
    long long int n,c,a,i,m;
    cin >> a;
    for(i=0;i<a;i++)
    {
        c=0,m=0;
        cin >> n;
        while(1)
        {
            if(n%2==0)
            {
                n=n/2;
                c++;
            }
            else if(n%3==0)
            {
                n=(n*2)/3;
                c++;
            }
            else if(n%5==0)
            {
                n=(n*4)/5;
                c++;
            }
            else if(n==1)
                break;
            else
            {
                cout <<-1 <<endl;
                m=1;
                break;
            }
        }
        if(m == 0)
        cout << c <<endl;
    }

}
