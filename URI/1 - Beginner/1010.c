#include <stdio.h>

int main(){
	int a,b,c,d;
	float x,y,z;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%f", &x);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%f", &y);
	
	z = (b*x)+(d*y);
	printf("VALOR A PAGAR: R$ %.2f\n", z);
	
	return 0;
}

