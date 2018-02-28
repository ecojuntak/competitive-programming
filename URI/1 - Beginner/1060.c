#include <stdio.h>

int main()
{
	float qwe[6];
	int sum=0,i;
	for(i=0;i<6;i++)
	{
		scanf("%f",&qwe[i]);
		if(qwe[i]>0)
		{
			sum++;
		}
	}
	printf("%d valores positivos\n",sum);
	
	return 0;
}
