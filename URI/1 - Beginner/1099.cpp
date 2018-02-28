#include <cstdio>

using namespace std;

int main()
{
	int a,x,y;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		int sum=0;
		scanf("%d %d",&x,&y);
		if(x>y)
		{
			for(int j=y+1;j<x;j++)
			{	
				if(j%2==1) sum=sum+j;
			}	
		}
		else
		{
			for(int j=x+1;j<y;j++)
			{	
				if(j%2==1) sum=sum+j;
			}	
		}
		printf("%d\n",sum);
	}
}
