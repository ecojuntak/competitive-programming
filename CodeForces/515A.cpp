#include <stdio.h>

int main()
{
	int a,b,s,x=0;
	
	scanf("%d %d %d",&a,&b,&s);
	
	do
	{
		a=a-1;
		x++;
	}while(a>0);
	
	do
	{
		b=b-1;
		x++;
	}while(b>0);
	
	if(x==s)
	{
		printf("Yes\n");
	}
	else if(x!=s)
	{
		printf("No\n");
	}
	
	return 0;
}

