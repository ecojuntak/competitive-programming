#include <stdio.h>

int main()
{
	int i,j,k,m;
	scanf("%d",&i);
	
	for(j=1;j<=i;j++)
	{
		scanf("%d %d",&k,&m);
		printf("Kasus #%d: %d\n",j,k*m);
	}
	
	return 0;
}
