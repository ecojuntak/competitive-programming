#include <stdio.h>

int main(){
	int i,j,k,l,m;
	
	scanf("%d",&i);

	for(j=1;j<=i;j++)
	{
		if(0!=j%10)
		{
			printf("%d\n",j);
			if(j==93)
			{
				printf("ERROR\n");
				break;
			}
		}
		else if(0==j%10)
		{
			continue;
		}
	}
	
	return 0;
}
