#include <stdio.h>

int main(){
	int X[10], i;
	
	for (i=0;i<=9;i++){
		scanf("%d", &X[i]);
	}
	
	for (i=0;i<=9;i++){
		if ( (X[i]==0) || (X[i]<=0) ){
			X[i]=1;
		}
		printf("X[%d] = %d\n", i, X[i]);
	}
	return 0;
}

