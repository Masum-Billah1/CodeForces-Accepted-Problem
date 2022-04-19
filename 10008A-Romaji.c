#include<stdio.h>
#include<string.h>
int main()
{
    int i,c = 0;
    char a[101];
    gets(a);
    for(i = 0;i<strlen(a);i++)
    {
        if((a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')&&a[i]!='n')
        {
            if(a[i+1] != 'a'&&a[i+1] != 'e'&&a[i+1] != 'i'&&a[i+1] != 'o'&&a[i+1] != 'u')
            {
                printf("No\n");
                c++;
                break;
            }
        }
        }
        if(c == 0)
            printf("YES\n");
}
