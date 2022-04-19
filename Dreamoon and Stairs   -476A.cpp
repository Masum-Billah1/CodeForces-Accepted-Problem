#include<iostream>
using namespace std;
int main()
{
    int n,m,step,i;
    cin >> n >> m;
    if(n%2==0)
        step = n/2;
    else
        step = n/2+1;
    while(1)
    {
        if(n<m)
        {
            cout <<-1<<endl;
            break;
        }
        if(step%m == 0){
            cout <<step<<endl;
            break;
        }
        else
            step++;
    }
}
