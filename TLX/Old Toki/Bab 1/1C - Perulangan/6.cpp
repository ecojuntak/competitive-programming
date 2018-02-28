#include <stdio.h>

int main(){
	int i,j,k,l;
	l=0;
	
	scanf("%d",&i);
	
	for(j=1;j<=i;j++)
	{
		for(k=1;k<=j;k++)
		{	
			printf("%d", l);
			l++;
			if(l==10)
			{
				l=0;
			}
		}
		printf("\n");
	}
	
	return 0;
}
