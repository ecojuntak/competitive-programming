#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int x=0,sum=0;
		scanf("%d",&b);
		if(b==1 || b==2 || b==3)
		{
			printf("Kasus #%d: %d\n",i,sum);
		}
		else if(b>=4)
		{
			for(int j=4;j<=b;j++)
			{
				if(j%2==0)
				{
					x++;
				}
				sum=sum+x;
			}
			printf("Kasus #%d: %d\n",i,sum);
		}
	}
	
	return 0;
}
