#include<stdio.h>

int *find_negsetzero(int a[], int len);
int main(){
    int a[5] = {2, -1, 7, -4, 5};
    int *p;
    int i; 
    do{
        p = find_negsetzero(a,5);
        if(p != NULL){
             *p = 0;
        }
    }while(p != NULL);  
    for(i = 0; i < 5; i++)
          printf("Number%d = %d\n",i,a[i]);
    //getch();
    return 0;
}

int *find_negsetzero(int a[], int len){
    int i;
    for(i = 0; i < len; i++){
        if(a[i] < 0)
              return a + i;
    }
    return NULL;
}

