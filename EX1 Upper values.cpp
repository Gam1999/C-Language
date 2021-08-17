#include<stdio.h>
int main()
{
	int num[10],i,sum=0,average;
	for(i=0;i<10;i++){
		printf("N%02d:",i+1);
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	printf("=%d\n",sum);
	average=sum/10;
	printf("=");
	for(i=0;i<10;i++){
		if(num[i]>average)
			printf("%d ",num[i]);
		else
			printf("");
	}
	return 0;
}
