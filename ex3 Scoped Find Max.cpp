#include<stdio.h>
#define LEN 10

int* find_max(int *p, int *q);

int main(){
    int d[LEN], i, m, n;
    int *max_ptr;

    for(i = 0; i < LEN; i++){
        printf("N%02d: ", i + 1);
        scanf("%d", &d[i]);
    }
    printf("Scope: ");
    scanf("%d %d", &m, &n);
    if((m >= 0 && m <=9) && (n >= 0 && n <=9))
        max_ptr = find_max(d+m-1, d+n-1);
    printf("= %d\n", *max_ptr);
    return 0;
}
int* find_max(int *p, int *q){
    int *a;
    a = p;
    do{
        if(*a < *p)
            a = p;
        p++;
    }while(p <= q);
    
    
    return a;
}

