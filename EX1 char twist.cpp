#include<stdio.h>
char char_twist(char c);
int main()
{
	char letter,ans;
	do{
		printf("Char:");
		scanf("%c",&letter);
		if(letter>='a'&&letter<='z' || letter>='A'&&letter<='Z'){
			ans=char_twist(letter);
			printf("=%c",ans);
		}	
		else
			printf("End.");break;
 }while(ans>='a'&&ans<='z' || ans>='A'&&ans<='Z');
	return 0;
}

char char_twist(char c){
	if(c>='a'&&c<='z')
		return c-32;
	else if(c>='A'&&c<='Z')
		return c+32;
}
