#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i;
    long long int t;
    cin >> test;
    while(test--)
    {
        int a;
        cin >> a;
        int c = 0;
        for(i=1;i<10;i++)
        {
            for(t=i;;t=t*10+i)
            {
                if(t>a)
                    break;
                c++;
                cout << t <<endl;
            }
        }
        cout << c <<endl;
    }
}
