#include<iostream>
using namespace std;
int main()
{
    long long int a,num=0,i,t,c=0,un;
    cin >> a;
    for(i=1;;i++)
    {
        t=num;
        c=c+t%10;
        num = num*10+9;
        if(num>a)
            break;
    }
    un=a-t;
    while(un>0)
    {
        c=c+un%10;
        un=un/10;
    }
    cout << c<<endl;
}
