#include <stdio.h>

int main(){
	double A,B,C, pi;
	pi = 3.14159;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	printf("TRIANGULO: %.3lf\n", A*C/2);
	printf("CIRCULO: %.3lf\n", pi*C*C);
	printf("TRAPEZIO: %.3lf\n", (A+B)*C/2);
	printf("QUADRADO: %.3lf\n", B*B);
	printf("RETANGULO: %.3lf\n", A*B);
	
	return 0;
}

