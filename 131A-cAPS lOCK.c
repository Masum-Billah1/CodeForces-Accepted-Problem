#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int i,j,c,t=0;
    gets(a);
    t = strlen(a);
    if(a[0]>='A' && a[0]<='Z')
        t=1;
    for(j = 1;j<t;j++)
        if(a[j]>='A' && a[j]<='Z')
            c++;
        t = t+c;
    if(t = strlen(a))
    {
        for(i = 0;i<t;i++)
    {
        if(a[i]>'Z')
           a[i]=a[i]-32;
        else if(a[i]<'a')
            a[i]=a[i]+32;
    }
    }
    puts(a);

    return 0;
}

