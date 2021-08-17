#include<stdio.h>
int main()
{
	int num,i,fac=1;
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(i=num;i>0;i--){
		fac*=i;
	}
	printf("%d! = %d",num,fac);
	
	return 0;
}
