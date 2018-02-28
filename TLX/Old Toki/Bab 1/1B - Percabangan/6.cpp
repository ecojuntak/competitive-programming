#include <stdio.h>
#include <math.h>

int main(){
	float n;
	int a,b;
	
	scanf("%f",&n);
	a=ceil(n);
	b=floor(n);
	
	printf("%d ",b);
	printf("%d\n",a);
	
	
	return 0;
}
