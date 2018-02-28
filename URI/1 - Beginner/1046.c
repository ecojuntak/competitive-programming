#include <stdio.h>

int main(){
	int a,b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a<b)
	{
		printf("O JOGO DUROU %d HORA(S)\n", b-a);
	}
	else if(a>b)
	{
		printf("O JOGO DUROU %d HORA(S)\n", b+24-a);
	}
	else if(a==b)
	{
		printf("O JOGO DUROU %d HORA(S)\n", a+24-b);
	}
	
	return 0;
}
