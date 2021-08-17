#include<stdio.h>
int main()
{
	int di,de,x,num,pnum;
	printf("X:");
	scanf("%d",&x);
	
	for(di=2;di<=x;di++){
		for(de=2;de<=di;de++){
			if(di%de==0)
				num++;
		}
		if(num==1)
			pnum++;
		num=0;
	}
	printf("=%d",pnum);
	return 0;
}
