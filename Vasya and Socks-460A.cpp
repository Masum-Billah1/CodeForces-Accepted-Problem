#include<iostream>
using namespace std;
int main()
{
    int n,m,i;
    cin >> n >> m;

    for(i=1;n>=m*i;i++)
        n++;
    cout << n<<endl;
}
