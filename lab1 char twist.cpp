#include<stdio.h>
char char_twist(char c);
int main(){
	char cha,ans;
	while(1){
		printf("Char: ");
		scanf(" %c",&cha);
		
		
		
		if((cha >= 'a' && cha <= 'z' )||( cha >='A' && cha <= 'Z')){
		
			char_twist(cha);
			ans = printf("= %c\n",ans);
		}
		else{
		
			printf("End");break;
	    }
	}
	return 0;
}
char char_twist(char c){
	if(c >= 'a' && c <= 'z')
		return c-32;
	else if(c >='A' && c <= 'Z')
		return c+32;
}
