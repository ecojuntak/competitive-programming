#include <stdio.h>

int main(){
	int I,J;
	
		for(I=1;I<=9;)
		{
			for(J=7;J>=5;J--)
			{
				printf("I=%d J=%d\n", I,J);
			}
			I=I+2;
		}
	
	
	return 0;
}

