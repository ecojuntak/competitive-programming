#include <stdio.h>

int main(){
	int a[9];
	int i;
	
	for(i=0;i<9;i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("%d ", a[0]);
	printf("%d ", a[3]);
	printf("%d\n", a[6]);
	printf("%d ", a[1]);
	printf("%d ", a[4]);
	printf("%d\n", a[7]);
	printf("%d ", a[2]);
	printf("%d ", a[5]);
	printf("%d\n", a[8]);
	return 0;
}
