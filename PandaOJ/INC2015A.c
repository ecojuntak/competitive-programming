#include <stdio.h>

int main()
{
	int a,b,c,d;
	int asd[100];
	
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		int e=0;
		scanf("%d",&c);
		{
			for(d=0;d<c;d++)
			{
				scanf("%d",&asd[d]);
				if(asd[d]<60)
				{
					e++;
				}
			}
		}
		printf("Case #%d: %d\n",b,e);
	}
	
	return 0;
}
