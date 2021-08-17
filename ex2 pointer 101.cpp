#include<stdio.h>

int sq(int *data);

int main(){
  int a,ans;
  printf("Enter: ");
  scanf("%d",&a);
  ans=sq(&a);
  printf("= %d",ans);
  return 0;
}

int sq(int *data){
   int ans;
   ans =*data**data;
   return ans;
}
