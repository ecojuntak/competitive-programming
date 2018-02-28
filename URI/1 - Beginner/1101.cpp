#include <cstdio>

using namespace std;

int main()
{
	int x,y;
	
	scanf("%d %d",&x,&y);
	while(x>0 && y>0)
	{
		int sum=0;
		if(x>y)
		{
			for(int i=y;i<=x;i++)
			{
				printf("%d ",i);
				sum=sum+i;
			}
		}
		else
		{
			for(int i=x;i<=y;i++)
			{
				printf("%d ",i);
				sum=sum+i;
			}
		}
		printf("Sum=%d\n",sum);
		scanf("%d %d",&x,&y);
	}
	
	return 0;
}
