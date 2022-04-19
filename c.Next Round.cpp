#include<stdio.h>
int main()
{
	int n,p,i,c = 0;
	scanf("%d %d",&n,&p);
	int a[100];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>p && a[i]!=a[i-1]||a[i] == p)
			c++;
	}
	
	
	printf("%d\n",c);
	
	return 0;
}
