#include <stdio.h>

int main(){
	int i;
	i=1;
	
	while (i<=100)
	{
		if (0==i%2)
		{
		printf("%d\n", i);
		}
		i++;		
	}
	
	return 0;
}

