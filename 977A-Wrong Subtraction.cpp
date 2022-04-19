#include<iostream>
using namespace std;
int main()
{
    int num,k;
    cin >>num>>k;

    for(;k!=0;k--)
    {
        if(num%10 == 0)
            num =num/10;
        else
            num = num-1;
    }
    cout << num<<endl;
}
