#include <stdio.h>

int main()
{
	int a[1005]={0};
	int i,b;
	int x,y=0;
	int max=0;

	scanf("%d", &b);
	for(i=0;i<b;i++)
	{
		scanf("%d", &x);
		a[x]++;
	}
	
	for(i=1;i<=1000;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	for(i=1;i<=1000;i++)
	{
		if(a[i]==max)
		{
			if(i>y)
			y=i;
		}
	}
	
	
	printf("%d\n",y);
	return 0;
}
