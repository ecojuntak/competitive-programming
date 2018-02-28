#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int a,b=1,j,k,m,x,y,qwe[1005],asd[1005];
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int min=9999;
		scanf("%d %d",&x,&y);
		for(j=0;j<x;j++)
		{
			scanf("%d",&qwe[j]);
		}
		for(j=0;j<y;j++)
		{
			scanf("%d",&asd[j]);
		}
		
		for(k=0;k<x;k++)
		{
			for(m=0;m<y;m++)
			{
				if(abs(qwe[k]-asd[m]) < min)
				{
					min=abs(qwe[k]-asd[m]);
				}
			}
		}
		printf("Kasus #%d: %d\n",i,min);
	}
	return 0;
}
