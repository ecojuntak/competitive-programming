#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int top[10000]={0};
		int bot[10000]={0};
	
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d %d",&c,&d);
			for(int k=c;k<=c+d;k++)
			{
				top[k]=1;
			}
		}
		
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d %d",&c,&d);
			for(int k=c;k<=c+d;k++)
			{
				bot[k]=1;
			}
		}
		
		scanf("%d",&b);
		printf("Kasus %d:\n",i);
		
		for(int j=0;j<b;j++)
		{
			scanf("%d",&e);
			int z=e;
			int sum=0;
			for(int k=0;k<=100000;k++)
			{
				if(k%2==0)
				{
					if(top[z]!=0) sum++;
					else break;
				}
				else
				{
					if(bot[z]!=0) sum++;
					else break;
				}
				z=z+e;
			}
			printf("%d\n",sum);
		}
	}
	
	return 0;
}
