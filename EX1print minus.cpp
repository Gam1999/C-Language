#include<stdio.h>

int print_minus(int a[], int len);

int main(){
   int len=6,i,j,tmp=0;
   int a[len];
   for(i = 0; i < len; i++){
      printf("N%02d: ",i+1);
      scanf("%d",&a[i]);
   }
   printf("=\n");
   for(i = 0;i < len;i++){
      tmp = print_minus(a,len);
      for(j = 0; j < len; j++)
         a[j] = a[tmp + j + 1];
   }
   
   return 0;
}
int print_minus(int a[], int len){
   int i;
   for(i = 0; i < len; i++){
      if(a[i] < 0){
         printf("%d\n", a[i]);
         return i;
      }
   }
   return -1;
}
