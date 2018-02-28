#include <stdio.h>

int main()
{
	int a,b,c=0;
	int i,j,k,m,n,p;
	scanf("%d %d",&a,&b);
	
	for(i=1;i<=a;i++)
	{
		if(0==i%2)
		{
			c++;
		}
		for(j=1;j<=b;j++)
		{
			if(0!=i%2)
			{
				printf("#");
			}
			else if(0==i%2)
			{
				if(0!=c%2)
				{
					if(j<=b-1)
					{
						printf(".");
					}
					else if(j==b)
					{
						printf("#");
					}
				}
				else if(0==c%2)
				{
					if(j==1)
					{
						printf("#");
					}
					else if(j>1)
					{
						printf(".");
					}
				}
				
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
