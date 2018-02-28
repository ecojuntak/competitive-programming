#include <stdio.h>

int main(){
	int a,b;
	float c;
	
	scanf("%d %d", &a,&b);
	c=(float)(a*b)/2;
	printf("%.2f\n", c);
	
	return 0;
}
