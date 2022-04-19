#include<iostream>
using namespace std;
int main()
{
    int k,r,i,s;
    cin >>k >>r;
    if(k%10==0)
        cout << 1 <<endl;
    else
    {
        k=k%10;
        for(i=1;;i++)
        {
            s=k*i;
            if(s%10==0||s%10==r)
                break;

        }
        cout << i <<endl;
    }
}
