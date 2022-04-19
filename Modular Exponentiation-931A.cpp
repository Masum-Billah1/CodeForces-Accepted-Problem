#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int N,m;
    cin >> N >> m;
    long long int t=pow(2,N);
    cout << m%t<<endl;
}
