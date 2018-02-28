#include <stdio.h>

int main(){
	int I,J,K;
	
		for(I=1;I<=9;)
		{
			for(J=7;J>=5;J--)
			{
				printf("I=%d J=%d\n", I,J);
			}
			I=I+2;
			
			for(J=9;J>=7;J--)
			{
				printf("I=%d J=%d\n", I,J);
			}
			I=I+2;
			
			for(J=11;J>=9;J--)
			{
				printf("I=%d J=%d\n", I,J);
			}
			I=I+2;
			
			for(J=13;J>=11;J--)
			{
				printf("I=%d J=%d\n", I,J);
			}
			I=I+2;
			
			for(J=15;J>=13;J--)
			{
				printf("I=%d J=%d\n", I,J);
			}
			I=I+2;
		}
	
	
	return 0;
}

