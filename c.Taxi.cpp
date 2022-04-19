#include<stdio.h>
int main()
{
	int n,j=0,c=0,t,i,*p;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	while(a!={0})
	{
	if(a[i]==4)
	{
		c++;
		a[i]=0;
	}
	else if(a[j]!=0)
	t=a[j];
	else
		j++;
	for(i=0;a[i];i++)
	{
		t=t+a[i];
		c++;
		a[i]=0;	
	}
	
	}
	
	printf("%d",c);
	return 0;
}
