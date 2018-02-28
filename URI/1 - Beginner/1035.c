#include <stdio.h>

int main(){
	int A,B,C,D;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	
	if ( (B>C && D>A) && ( (C+D)>(A+B) ) && (A>0,C>0,D>0))
	{
		printf("Valores aceitos\n");
	}
	else
	{
		printf("Valores nao aceitos\n");
	}
	
	
	return 0;
}

