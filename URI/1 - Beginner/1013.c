#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int a,b,c,d,e;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	d=(a+b+abs(a-b))/2;
	e=(c+d+abs(c-d))/2;
	
	printf("%d eh o maior\n", e);	
	
	return 0;
}

