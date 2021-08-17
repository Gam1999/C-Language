#include<stdio.h>

int main(){
    int max,min,i,j,num[10];
    for(i=0;i<10;i++){
        printf("N%02d: ",i+1);
        scanf("%d",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(j=0;j<10;j++){
        if(max<num[j])
            max=num[j];
        else if(min>num[j])
            min=num[j];
    }
    printf("Max=%d\n",max);
    printf("Min=%d",min);
    return 0;
}
