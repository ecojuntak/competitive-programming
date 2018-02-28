#include <cstdio>

using namespace std;

int main()
{
	int a,b,qwe[1005];
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int c,sum=0;
		scanf("%d",&c);
		for(int d=0;d<c;d++)
		{
			scanf("%d",&qwe[d]);
			{
				if(qwe[d]>0)
				{
					sum=sum+qwe[d];
				}
			}
		}
		printf("Kasus #%d: %d\n",i,sum);
	}
	
	return 0;
}
