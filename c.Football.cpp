#include <stdio.h>
#include <string.h>
int main()
{
	int i,c=1;
	char a[101];
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i] == a[i+1])
		{
			c++;
			if(c == 7)
			{
				printf("YES\n");
				break;
		}
		}
		else if(a[i]!=a[i+1])
			c = 1;
	}
		
		if(i == strlen(a))
			printf("NO\n");
	return 0;
}
