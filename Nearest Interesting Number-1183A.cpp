#include<iostream>
using namespace std;
int sum(int num)
{
    int i;
    int sod=0;
    for(i=0;num>0;i++){
        sod=sod+num%10;
        num=num/10;
    }
    return sod;
}
int main()
{
    int num,t,i;
    cin >> num;

    t = sum(num);
    if(t%4 == 0)
    {
        cout << num;
        return 0;
    }
    else
        for(i=0;i<4;num++)
        {
            t = sum(num);
            if(t%4 == 0)
            {
                cout << num<<endl;
                break;
            }
        }
}
