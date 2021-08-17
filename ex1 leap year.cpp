#include<stdio.h>
int is_leap_year(int y);
int main()
{
	int year,ans;
	printf("Enter:");
	scanf("%d",&year);
	ans = is_leap_year(year);
	
	if(ans==1)
		printf("=Yes");
	else
		printf("=No");
return 0;
}
int is_leap_year(int y){
	if(y%4==0)
		return 1;
	else if(y%400==0)
		return 1;
	else if(y%100==0)
		return 0;
}

