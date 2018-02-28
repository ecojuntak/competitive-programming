#include <stdio.h>

int main()
{
	int a,j;
	int x=0;
	
	for(j=1;j<=5;j++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			x=x+1;
		}
	}
	printf("%d valores pares\n",x);
	
	return 0;
}

