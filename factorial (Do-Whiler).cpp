#include<stdio.h>
int main()
{
	int num,i,fac;
	printf("Enter number: ");
	scanf("%d",&num);
	
	i=num;
	do{
		fac*=i;
		i--;
		
	}while(i>0);
	printf("%d! = %d",num,fac);
	
	return 0;
}
