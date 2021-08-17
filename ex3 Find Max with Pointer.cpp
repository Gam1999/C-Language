#include<stdio.h>
#define LEN 5
int*  find_max(int *p, int len); 
int main(){
	int i,n[LEN];
	int *ans;
	for(i=0;i<LEN;i++){
		printf("N%02d: ",i+1);
		scanf("%d",&n[i]);
	}
	
	ans =  find_max(n, LEN);
	printf("= %d",*ans);
	
	return 0;
}
int*  find_max(int *p, int len){
	int i,*max;
	max=p;
	for(i=0;i<LEN;i++){
		if(*max<*p)
			*max=*p;
		p++;
	}
	return max;
}
