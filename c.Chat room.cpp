#include<stdio.h>
#include<string.h>
int main()
{
	int i,b[26]={0},t=1;
	char a[101];
	gets(a);
	
		for(i=0;i<strlen(a);i++)
		{
			if(a[i] == 'h')
			{
				printf("%c\n",a[i]);
				i++;
				printf("i=%d\n",i);
				if(a[i]=='e')
				{
					printf("e\n");
					i++;
					printf("i=%d\n",i);
					if(a[i]=='l')
					{
						printf("l\n");
						i++;
						printf("i=%d\n",i);
						if(a[i]=='l')
						{
							printf("l\n");
							i++;
							printf("i=%d\n",i);
							printf("%c\n",a[i]);
							if(a[i]=='o')
							{
								printf("o\n");
								printf("YES");
								break;
							}			
							else
								i++;				
						}
						else
							i++;										
					}
					else
						i++;
				}
				else
					i++;
			}
			else
				i++;
	}
	
}
