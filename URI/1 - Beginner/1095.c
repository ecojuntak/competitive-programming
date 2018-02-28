#include <stdio.h>

int main(){
	int I,J;
	I=1;
	J=60;
	
	while (J>=0)
	{
		printf("I=%d J=%d\n", I,J);
		J=J-5;
		I=I+3;
	}
	
	return 0;
}

