#include<iostream>
using namespace std;
int main()
{
    int i,c=0,j;
    for(i = 1;i<1000;i++)
    {
        if(i%6 == 5)
        for(j = 5;j<24;j=j+2)
        {
        if(i == 2 || i == 3||i == j)
        {
            cout <<i <<endl;
            c++;
            break;
        }

        else if((i%6 == 5||i%6 == 1)&& i%j!=0 &&i!=1)
        {
            cout << i<<endl;
            c++;
            break;
        }
        if(i%6 == 1)
        for(j = 5;j<24;j=j+4)
        {
        if(i == 2 || i == 3||i == j)
        {
            cout <<i <<endl;
            c++;
            break;
        }

        else if((i%6 == 5||i%6 == 1)&& i%j!=0 &&i!=1)
        {
            cout << i<<endl;
            c++;
            break;
        }
        }
    }
    }
    cout <<"c = "<< c <<endl;
}


