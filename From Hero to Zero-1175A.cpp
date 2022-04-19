#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=0;i<t;i++)
    {
        long long int n,k,c=0;
        cin >> n >>k;
        while(n>0)
        {
            if(n%k == 0){
                n=n/k;
                c++;
            }
            else
            {
                c=c+n%k;
                n=n-(n%k);
            }

        }
        cout << c <<endl;
    }

}
