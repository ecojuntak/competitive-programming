#include <stdio.h>

int main(){
	int a,b,x,sum=0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a<b)
	{
		for(x=a;x<=b;x++)
		{
			if (x%13!=0)
			{
				sum=sum+x;
			}
		}
	}
	else
	{
		for(x=b;x<=a;x++)
		{
			if (x%13!=0)
			{
				sum=sum+x;
			}
		}
	}
	
	
	printf("%d\n",sum);
	
	return 0;
}

