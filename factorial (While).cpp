#include<stdio.h>
int main()
{
	int num,i,fac=1;
	printf("Enter number: ");
	scanf("%d",&num);
	
	i=num;
	while(i>0){
		fac*=i;
		i--;
			
	}
	printf("%d! = %d",num,fac);
	
	return 0;
}
