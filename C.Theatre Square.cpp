#include <stdio.h>
int main()
{
	int a,b,c,t1,t2,s;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a%c != 0)
		t1 = a/c+1;
	else
		t1 = a/c;
	if(b%c!= 0)
		t2 = b/c+1;
	else
		t2 = b/c;
		
	s=t1+t2;
	if(b <= c||a<=c)
		s = s-1;
	printf("%d\n",s);
	
	return 0;
}
