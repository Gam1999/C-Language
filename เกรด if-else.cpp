#include<stdio.h>
int main()
{
	float score;
	printf("Enter score: ");
	scanf("%f",&score);
	
	if(score>=0 && score<50)
		printf("Score %.2f is E",score);
	else if(score>=50 && score<60)
		printf("Score %.2f is D",score);
	else if(score>=60 && score<70)
		printf("Score %.2f is C",score);
	else if(score>=70 && score<80)
		printf("Score %.2f is B",score);
	else if(score>=80 && score<100)
		printf("Score %.2f is A",score);
		
	return 0;
}
