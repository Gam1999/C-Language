#include<stdio.h>
int main()
{
	int num,i=1,pos=0,ne=0;
	
	do{
		printf("N%d: ",i);
		scanf("%d",&num);
		if(num>0)
			pos++;
		else
			ne--;
		i++;
	}while(num==0);
	printf("Positive:%d ",pos);
	printf("Negative:%d ",ne);
	return 0;
}
