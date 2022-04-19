#include<stdio.h>
int main()
{
	int n,i,t;
	scanf("%d",&n);
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],b[i]);
		t=abs(a[0]-b[0]);
	}
	printf("%d",&t);
	
	return 0;
}
