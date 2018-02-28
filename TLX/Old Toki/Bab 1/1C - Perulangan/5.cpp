#include <stdio.h>

int main(){
	int i,j,k,l,m;
	
	scanf("%d",&i);
	m=i;
	for(j=1;j<=i;j++)
	{
		for(k=m-1;k>=1;k--)
		{
			printf(" ");
		}
		m--;
		
		for(l=1;l<=j;l++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
