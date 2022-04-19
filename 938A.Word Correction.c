#include<stdio.h>
#include<string.h>
int  main()
{
    int i,j,n;
    scanf("%d",&n);
    getchar();
    char a[101];
    gets(a);
    for(int i =0;i<n;i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
            printf("%c",a[i]);
        else
        {
            printf("%c",a[i]);
            for(j = 0;;j++)
            if(a[i+1] == 'y'||a[i+1]=='a'||a[i+1] == 'e'||a[i+1] == 'i'||a[i+1] == 'o'||a[i+1] == 'u')
            {
                i++;
            }
            else
                break;

        }

    }
    return 0;
}
