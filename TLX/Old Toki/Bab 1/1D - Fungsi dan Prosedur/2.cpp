#include <stdio.h>

int hasil(int a);

int main()
{
	int a;
	
	while(scanf("%d", &a)!=EOF)
	{	
		hasil(a);
	}
	
	return 0;	
}

int hasil(int a)
{
	int x;
	
	if(a>=0 && a<10)
	{
		printf("satuan\n");
	}
	else if(a>=10 && a<99)
	{
		printf("puluhan\n");
	}
	else if(a>=100 && a<999)
	{
		printf("ratusan\n");
	}
	else if(a>=1000 && a<9999)
	{
		printf("ribuan\n");
	}
	else if(a>=10000 && a<99999)
	{
		printf("puluhribuan\n");
	}
	
	return 0;
}
