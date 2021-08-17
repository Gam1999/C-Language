#include<stdio.h>
#define LEN 10 
int* find_neg(int *p, int *q); 
int main(){
	int i,d[LEN],*p=d;
	for(i=0;i<LEN;i++){
		printf("N%02d: ",i+1);
		scanf("%d",&d[i]);
	}
	
	
	do{
		if((p = find_neg(p, d+9))!=NULL)
			*p=0;	
		p++;
	}while(find_neg(p, d+9)!=NULL);
	
	printf("= ");     
	for(i = 0; i < LEN; i++){ 
		printf("%d ", d[i]);            
	} 
	printf("\n");     
	return 0;   
}
int* find_neg(int *p, int *q){
	while(p<=q){
		if(*p<0)
			return p;
		p++;
	}
	return 0;
}
