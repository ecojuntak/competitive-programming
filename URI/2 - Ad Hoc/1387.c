#include <stdio.h>

int main(){
	int L,R;
	
	scanf("%d %d",&L,&R);
	
	while(L!=0 && R!=0)
	{
		printf("%d\n",L+R);
		scanf("%d %d",&L,&R);
	}

	return 0;
}
