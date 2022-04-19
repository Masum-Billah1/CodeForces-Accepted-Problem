#include<iostream>
using namespace std;
int main()
{
    int n,k,c=0,i;
    cin >> n >> k;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
        if(a[i]+k <= 5)
            c++;
    }
    cout << c/3 <<endl;
}
