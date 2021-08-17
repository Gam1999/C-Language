#include<stdio.h>
int main()
{
	int num,i=1,input,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	
	while(i<=num){
		printf("Input number%d: ",i);
		scanf("%d",&input);
		i++;
		sum+=input;
	}
	printf("Sum is %d\n",sum);
	printf("Average is %.2f",(float)sum/num);
	
	return 0;
	
}
