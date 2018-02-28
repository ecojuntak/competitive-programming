#include <stdio.h>

int main(){
	
	int R;
	double pi,VOLUME;
	pi = 3.14159;
	
	scanf("%d", &R);
	VOLUME = (4.0/3.0)*pi*R*R*R ;
	printf("VOLUME = %.3lf\n", VOLUME);
	
	return 0;
	
}

