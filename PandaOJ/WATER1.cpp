#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,qwe[10000];
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int sum=0;
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&qwe[j]);
		}
		scanf("%d",&c);
		
		for(int j=0;j<b;j++)
		{
			if(qwe[j]==c)
			{
				sum++;
			}
		}
		
		if(sum>0)
		{
			printf("Kasus #%d: ADA %d BOTOL DITEMUKAN\n",i,sum);
		}
		else if(sum==0)
		{
			printf("Kasus #%d: TIDAK ADA\n",i);
		}
	}
	return 0;
}
