#include<stdio.h>
int main()
{
	int num[10],i,max,min;
	for(i=0;i<10;i++){
		printf("N%02d: ",i+1);
		scanf("%d",&num[i]);
	}
	
	max=num[0];
	for(i=0;i<10;i++){
		if(num[i]>max)
			max=num[i];
	}
	
	min=num[0];
	for(i=0;i<10;i++){
		if(num[i]<min)
			min=num[i];
	}
	printf("max=%d\n",max);
	printf("min=%d",min);
	return 0;
}
