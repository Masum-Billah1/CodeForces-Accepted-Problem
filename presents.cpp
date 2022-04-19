#include<stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++){
		for(i=0;i<n;i++){
			if(a[i]==j)
				printf("%d ",i+1);
			}
	}
	return 0;
}
