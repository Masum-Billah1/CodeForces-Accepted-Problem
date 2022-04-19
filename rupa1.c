#include<stdio.h>
int main()
{
    long long int n,c=0,i,rmd;
scanf("%lld",&n);
    for(i=1;n>0;i++)
    {
        rmd=n%10;
        if((rmd==4) || (rmd==7))
            c++;
        n=n/10;
        }
        if((c==4) || (c==7))
            printf("YES\n");
        else
            printf("NO\n");


        return 0;
}
