#include <stdio.h>

int main(){
	int N,i,x,y;
	
	scanf("%d", &N);
	
	for (i=N; i<=N; i++)
	{
		for (x=1; x<=N; x++)
		{
			for (y=N-1; y>=1; y--)
			{
			printf("%d\t", N-y );
			printf("%d\t", N-y );
			printf("%d\n", N-y );
			}
		}
	}
	
	return 0;
}
