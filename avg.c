#include<stdio.h>
int main(){
	int year,mod;
	scanf("%d",&year);
	mod = year%400;
	if(mod==0){
		printf("Leap Year");
	}
	else{
		mod = year%100;
		if(mod == 0){
			printf("Not Leap Year");
		}
		else{
			mod = year%4;
			if(mod == 0){
				printf("Leap Year");
			}
			else{
				printf("Not Leap Year");
			}
		}
	}
	return 0;
}
