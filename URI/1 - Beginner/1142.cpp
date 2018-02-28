#include <cstdio>

using namespace std;

int main()
{
	int a;
	int i=0,x=1;
	
	scanf("%d",&a);
	while(i!=a)
	{
		for(int j=1;j<=4;j++)
		{
			if(j==4) 
			{
				printf("PUM\n");
				x++;
			}
			else 
			{
				printf("%d ",x);
				x++;	
			}
		}
		i++;
	}
	
	return 0;
}
