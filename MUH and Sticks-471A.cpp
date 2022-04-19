#include<iostream>
using namespace std;
int main()
{
    int a[6],i,b[10]={0},t=0,c=0;

    for(i=0;i<6;i++)
        cin >> a[i];

    for(i=0;i<6;i++)
    {
        b[a[i]]++;
        if(b[a[i]]>=4)
            t=b[a[i]];

        if(b[a[i]]==6)
        {
            cout <<"Elephant"<<endl;
            return 0;
        }
    }
    if(t<4){
        cout <<"Alien"<<endl;
        return 0;
    }
    //cout <<"t = "<< t<<endl;
    for(i=0;i<10;i++)
        if(b[i]!=0)
            c++;

    if(c==3)
        cout <<"Bear"<<endl;
    else if(t>4 && c==2)
        cout <<"Bear"<<endl;
    else if(c==2)
        cout <<"Elephant"<<endl;


}
