#include<stdio.h>
int main()
{
	int number[10];
	int i,max,min;
	
	for(i=0;i<10;i++)
	{
		printf("Enter number%d: ",i+1);
		scanf("%d",&number[i]);
		
	}
	max=number[0];
	for(i=0;i<10;i++){
		if(number[i]>max)
			max=number[i];
	}
	
	min=number[0];
	for(i=0;i<10;i++){
		if(number[i]<min)
			min=number[i];
	}
	
	printf("max is %d and min is %d",max,min);
	return 0;
}
