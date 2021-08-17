#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter number: ");
	scanf("%d",&num);
	i=1;
	while(i<=num){
		printf("%d ",i);
		i+=2;
	}
	return 0;
}
