#include <stdio.h>

int main()
{
	int a,i,j;
	
	scanf("%d",&i);
	
	for(j=1;j<=i;j++)
	{
		scanf("%d",&a);
		if(a<0 && a%2==0)
		{
			printf("EVEN NEGATIVE\n");
		}
		else if(a<0 && a%2!=0)
		{
			printf("ODD NEGATIVE\n");
		}
		else if(a>0 && a%2==0)
		{
			printf("EVEN POSITIVE\n");
		}
		else if(a>0 && a%2!=0)
		{
			printf("ODD POSITIVE\n");
		}
		else if(a==0)
		{
			printf("NULL\n");
		}
	}
	
	return 0;
}

