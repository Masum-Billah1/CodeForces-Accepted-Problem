#include<stdio.h>
int main()
{
    char s[1001],t[1001];
    int l1,l2;

    gets(s);
    gets(t);
    l1 = strlen(s);
    l2 = strlen (t);

    printf("%d %d",l1,l2);
}
