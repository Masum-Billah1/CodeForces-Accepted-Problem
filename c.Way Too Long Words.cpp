#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j,l;
	char a[100][101];
	scanf("%d\n",&n);
	
	for(i = 0;i<n;i++)
		gets(a[i]);
		
	for(i = 0;i<n;i++)
	{
		l= strlen(a[i]);
		
		if(l<11)
			puts(a[i]);
		else
			printf("%c%d%c\n",a[i][0],l-2,a[i][l-1]);
	}
	return 0;
}
