#include <stdio.h>

int main(){
	int X,Y;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if (X==1)
	{
		printf("Total: R$ %.2f\n", Y*4.00);
	}
	else if (X==2)
	{
		printf("Total: R$ %.2f\n", Y*4.50);
	}
	else if (X==3)
	{
		printf("Total: R$ %.2f\n", Y*5.00);
	}
	else if (X==4)
	{
		printf("Total: R$ %.2f\n", Y*2.00);
	}
	else if (X==5)
	{
		printf("Total: R$ %.2f\n", Y*1.50);
	}
	
	
	return 0;
}

