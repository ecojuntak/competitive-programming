#include <stdio.h>

int main(){
	long int sum=0,a;
	
	while(scanf("%ld",&a)!=EOF)
	{
		sum = sum + a;	
	}
	
	printf("%ld\n",sum);
	
	return 0;
}
