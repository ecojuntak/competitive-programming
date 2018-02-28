#include <stdio.h>

int main()
{
	int a[30000];
	int i,b;
	i=0;
	
	while(scanf("%d", &a[i])!=EOF)
	{
		i++;
	}
		
	for(b=i-1;b>=0;b--)
	{
		printf("%d\n", a[b]);
	}
	
	return 0;
}

