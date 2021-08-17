#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	int i,check=0;
	printf("Enter string: ");
	gets(text );
	
	for(i=0;i<strlen(text);i++){
		if(text[i]=='a'){
			check = 1;
			i=strlen(text);
		}
		else
			printf("There is not 'a' in the string");
	}
	
	if(check){//=1
		printf("There is 'a' in the string\n");
		printf("At ");
		for(i=0;i<strlen(text);i++){
			if(text[i]=='a')
				printf("%d ",i+1);
		}
	}
	return 0;
}
