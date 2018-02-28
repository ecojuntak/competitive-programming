#include <stdio.h>

int main(){
	
	double A,R,phi;
	phi = 3.14159;
	
	scanf("%lf", &R);
	A = phi * R*R ;
	printf("A=%.4lf\n", A);
	
	return 0;
}

