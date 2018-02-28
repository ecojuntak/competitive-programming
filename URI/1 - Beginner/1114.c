#include <stdio.h>

int main()
{
	int a,b=0,i;

	do
	{
		scanf("%d", &a);
		if(a!=2002)
		{
			printf("Senha Invalida\n");
		}
		
	}
	while (a!=2002);
	
	printf("Acesso Permitido\n");

	return 0;
}

