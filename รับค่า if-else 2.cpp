#include<stdio.h>
int main()
{
	char type;
	printf("Input: ");
	scanf("%c",&type);
	
	Switch(type)
	{
		Case 'C':printf("Car");
		Case 'c':printf("Car");break;
	}
	
	return 0;

	
}
