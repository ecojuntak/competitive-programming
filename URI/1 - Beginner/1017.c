#include <stdio.h>

int main(){
	int a,b;
	double x;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	x = (a*b)/12.0;
	
	printf("%.3lf\n", x);
	
	return 0;
	
}

