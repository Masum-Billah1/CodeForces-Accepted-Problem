#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    char a[28][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
                     "twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
                     "thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    if(n<=20)
        puts(a[n]);

    else if(n>20 && n%10==0)
        puts(a[18+n/10]);
    else
    {
        printf("%s",a[18+n/10]);
        cout<<'-';
        puts(a[n%10]);
    }
}
