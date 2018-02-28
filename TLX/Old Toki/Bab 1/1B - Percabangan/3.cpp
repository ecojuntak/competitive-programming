#include <stdio.h>

int main(){
	int a;
	
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("positif\n");
	}
	else if(a<0)
	{
		printf("negatif\n");
	}
	else if(0==a)
	{
		printf("nol\n");
	}
	
	return 0;
}
