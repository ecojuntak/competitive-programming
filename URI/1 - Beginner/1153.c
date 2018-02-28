#include  <stdio.h>

int main(){
	int N, i;
	
	scanf("%d", &N);
	
	for (i=N; i>=1; i--)
	{
		N=N*i;
		printf("%d", N);
	}
	
	return 0;
}
