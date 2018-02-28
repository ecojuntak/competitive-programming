#include <stdio.h>

int main()
{
	int i,n;
	int a,b;
	
	scanf("%d",&n);
	
	while(n!=0)
	{
		int x=0,y=0;
		for (i=1;i<=n;i++)
		{
			scanf("%d",&a);
			if(a==1)
			{
				x=x+1;
			}
			else if(a==0)
			{
				y=y+1;
			}
		}
		printf("Mary won %d times and John won %d times\n", y,x);
		scanf("%d",&n);
	}
	
	
	return 0;
}

