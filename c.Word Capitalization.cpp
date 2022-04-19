#include<stdio.h>
int main()
{
	char a[1001];
	gets(a);
	
	if(a[0]>'Z')
		a[0]=a[0]-32;
		
	puts(a);
	
	return 0;
}
