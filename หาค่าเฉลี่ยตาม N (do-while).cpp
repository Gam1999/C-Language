#include<stdio.h>
int main()
{
	int num,i,input,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	
	i=1;
	do{
		printf("Input number%d: ",i);
		scanf("%d",&input);
		i++;
		sum+=input;
	}while(i<=num);
	printf("Sum is %d\n",sum);
	printf("Average is %.2f",(float)sum/num);
	
	return 0;
}
