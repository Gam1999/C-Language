#include<stdio.h>
#include<string.h>
int main(){
	int i,num;
	char text[127];
	printf("Enter:");
	scanf("%[^\n]",text);
	
	num=strlen(text);
	for(i=num-1;i>=0;i--){
		
		printf("%C",text[i]);
	}

	return 0;
}
