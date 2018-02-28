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
			scanf("%d %d",&a,&b);
			if(a<b)
			{
				x=x+1;
			}
			else if(a>b)
			{
				y=y+1;
			}
		}
		printf("%d %d\n",y,x);
		scanf("%d",&n);
	}
	
	
	return 0;
}

