#include<stdio.h>
#include<string.h>
int main()
{
    char a[1002],b[1002];
    int l1,l2,i;

    //gets(a);
    scanf("%s",a);
    scanf(" %s",b);
    // gets(b);
    l1 = strlen(a);
    l2 = strlen(b);
    if(l1 != l2)
        printf("NO\n");
    else
    {
        for(i = 0;i<l1;i++)
        {
            if((a[i]=='a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] =='u')&&(b[i]!='a'&& b[i] != 'e'&&b[i] != 'i'&&b[i] != 'o'&&b[i] !='u'))
            {
                printf("NO\n");
                break;
            }
            else if((a[i]!='a'&&a[i] != 'e'&&a[i] != 'i'&&a[i] != 'o'&&a[i] !='u')&&(b[i]=='a'||b[i] == 'e'||b[i] == 'i'||b[i] == 'o'||b[i] =='u'))
            {
                printf("NO\n");
                break;
            }
            else if(i == l1-1)
                printf("YES\n");
        }

    }
    return 0;
}
