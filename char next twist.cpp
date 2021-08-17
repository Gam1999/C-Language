#include<stdio.h>

char char_next(char c); 
char char_twist(char c); 

int main(){
    int c,n = 1;
    while(n != 0){
        c = getchar();
            if(c != EOF)
                 printf("%c",char_twist(char_next(c)));
            else if(c == EOF)    
                 n = 0;
    }
    return 0;
}

char char_next(char c){
    if(c >= 'a' && c <= 'y')
        return c + 1;
    else if(c >= 'A' && c <= 'Y')
        return c + 1;
    else if(c == 'z')
        return 'a';
    else if(c == 'Z')
        return 'A';
    else
        return c;
} 

char char_twist(char c){
    if(c >= 'a' && c <= 'y')
        return (c -'a') + 'A';
    else if(c >= 'A' && c <= 'Y')
        return (c-'A') + 'a';
    else if(c == 'z')
        return 'Z';
    else if(c == 'Z')
        return 'z';
    else 
        return c;
}
