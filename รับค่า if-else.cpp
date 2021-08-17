#include<stdio.h>
int main()
{
	char type;
	printf("Input: ");
	scanf("%c",&type);
	
	if(type == 'C' || type == 'c')
		printf("Car");
	else if(type == 'V' || type == 'v')
		printf("Van");
	else if(type == 'M' || type == 'm')
		printf("Motorcycle");
	else
		printf("Other");
	
	return 0;

	
}
