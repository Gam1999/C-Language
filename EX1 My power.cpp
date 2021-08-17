#include<stdio.h>
int main()
{
	int base,power,sum=1,i;
	printf("base: ");
	scanf("%d",&base);
	printf("power: ");
	scanf("%d",&power);
	
	for(i=0;i<power;i++){
		sum*=base;
	}
	printf("=%d",sum);
	return 0;
}
