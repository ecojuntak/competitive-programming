#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(b>0)
	{
		for(int i=0;i<=b;i++)
		{
			printf("%d ",a);
			if(a%4==0)
			{
				printf("kabisat\n");
			}
			else if(a%4!=0)
			{
				printf("bukan kabisat\n");
			}
			a++;
		}
	}
	else if(b<0)
	{
		b=b*(-1);
		for(int i=0;i<=b;i++)
		{
			printf("%d ",a);
			if(a%4==0)
			{
				printf("kabisat\n");
			}
			else if(a%4!=0)
			{
				printf("bukan kabisat\n");
			}
			a--;
		}
	}
	
	return 0;
}
