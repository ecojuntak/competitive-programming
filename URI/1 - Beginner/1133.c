#include <stdio.h>

int main()
{
	int x,y,i;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(y>x)
	{
		for(i=x+1;i<y;i++)
		{
			if(i%5==2 || i%5==3)
			{
				printf("%d\n",i);
			}	
		}
	}
	else
	{
		for(i=y+1;i<x;i++)
		{
			if(i%5==2 || i%5==3)
			{
				printf("%d\n",i);
			}	
		}
	}
	
	return 0;
}

