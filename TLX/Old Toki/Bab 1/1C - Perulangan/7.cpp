#include <stdio.h>

int main(){
	int i,j,k,m;
	
	scanf("%d",&i);
	scanf("%d",&k);
	m=i;
	
	for(j=1;j<=i;j++)
	{
		if(0==j%k)
		{
			printf("*");
		}
		else if(0!=j%k)
		{
			printf("%d",j);
		}
		
		if(m!=j)
		{
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}
