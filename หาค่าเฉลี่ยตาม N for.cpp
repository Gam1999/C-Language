#include<stdio.h>
int main()
{
	int num,i,input,sum=0;
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		printf("Input number: ");
		scanf("%d",&input);
		sum+=input;
	}
	printf("Sum is %d\n",sum);
	printf("Average is %.2f",(float)sum/num);
	
	return 0;
}

