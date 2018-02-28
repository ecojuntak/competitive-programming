#include <stdio.h>

int main(){
	int A,B,C;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	if (A<B && A<C)
	{
		if (B<C)
		{
			printf("%d\n", A);
			printf("%d\n", B);
			printf("%d\n\n", C);
		}
		else if (C<B)
		{
			printf("%d\n", A);
			printf("%d\n", C);
			printf("%d\n\n", B);
		}
	}
	else if (B<A && B<C)
	{
		if (A<C)
		{
			printf("%d\n", B);
			printf("%d\n", A);
			printf("%d\n\n", C);
		}
		else if (C<A)
		{
			printf("%d\n", B);
			printf("%d\n", C);
			printf("%d\n\n", A);
		}
	}
	else if (C<A && C<B)
	{
		if (A<B)
		{
			printf("%d\n", C);
			printf("%d\n", A);
			printf("%d\n\n", B);
		}
		else if (B<A)
		{
			printf("%d\n", C);
			printf("%d\n", B);
			printf("%d\n\n", A);
		}
	}
	
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	
	
	return 0;
}

