#include<iostream>
using namespace std;
int main()
{
    int i,c=0;
    for(i = 1;i<1000;i++)
    {
        if(i == 2 || i == 3||i==5||i == 7||i== 11||i==13||i==17||i==19)
        {
            cout <<i <<endl;
            c++;
        }
        else if((i%6 == 5||i%6 == 1)&&i%5!=0&&i%7!=0 && i%11!=0&&i!=1&& i%13!=0 && i%17!=0 && i%19 !=0)
        {
            cout << i<<endl;
            c++;
        }
    }
    cout <<"c = "<< c <<endl;
}

