#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a == b)
        cout << a*10 <<" "<<a*10+1;
    else if(a+1 == b)
        cout << a*10+9 <<" "<< b*10<<endl;
    else if(a == 9 && b == 1)
        cout << a <<" "<<b*10<<endl;
    else
        cout <<-1<<endl;
}
