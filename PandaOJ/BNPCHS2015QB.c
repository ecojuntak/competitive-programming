#include <stdio.h>

int main()
{
	int i,j,k,m;
	scanf("%d",&i);
	
	for(j=1;j<=i;j++)
	{
		scanf("%d",&k);
		if(k%2==1)
		{
			printf("Kasus #%d: CINTA\n",j);
		}
		else if(k%2==0)
		{
			printf("Kasus #%d: TIDAK CINTA\n",j);
		}
	}
	
	return 0;
}
