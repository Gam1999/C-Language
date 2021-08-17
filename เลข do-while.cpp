#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter number: ");
	scanf("%d",&num);
	i=1;
	do{
		printf("%d ",i);
		i+=2;
	}while(i<=num);
	
	return 0;
}
