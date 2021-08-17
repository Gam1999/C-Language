#include<stdio.h>
#include<string.h>
int main()
{
	int num[10],i,sum=0;
	
	for(i=0;i<10;i++){
		printf("Enter number%d: ",i+1);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<10;i++){
		sum+=num[i];
	}
	
	printf("Sum is %d\n",sum);
	printf("Average is %.3f",(float)sum/10);
	
	return 0;
}
