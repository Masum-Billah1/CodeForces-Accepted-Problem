#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    char a[]={"I hate that"};
    char b[]={"I love that"};

    if(n==1)
        printf("I hate it\n");
    else
    for(i=0;i<n-1;i++)
    {
        if(i%2==0)
            printf("%s ",a);
        else
            printf("%s ",b);

        if(i == n-2)
        {
            if(n%2!=0)
                printf("I hate it\n");
            else
                printf("I love it\n");
        }

    }
}
