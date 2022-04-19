#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j=0;
    char a[101],b[101];
    gets(a);

    for(i=0; i<strlen(a); i++)
        b[i]=a[i];
    for(t=1; t<4; t++)
        for(i=0; i<strlen(a); i=i+2)
        {
            a[i]=a[i]-'0';
            if(a[i] == t)
            {
                b[j]=t+'0';
                j=j+2;
            }
            a[i]=a[i]+'0';
        }
    a[j-1]='\0';
    puts(b);
    return 0;
}

