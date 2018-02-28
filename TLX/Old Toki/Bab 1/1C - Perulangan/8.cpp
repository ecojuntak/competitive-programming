#include <stdio.h>

int main(){
	int i,j,k;
	
	scanf("%d",&i);
	
	for(j=i;j>=1;j--)
	{
		if(0==i%j)
		{
			printf("%d\n",j);
		}
	}
	
	return 0;
}
