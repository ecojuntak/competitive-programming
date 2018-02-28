#include <cstdio>

using namespace std;

int main()
{
	int a,b,x=1;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=b;i++)
	{
		printf("%d",i);
		if(x==a)
		{	
			x=1;
			printf("\n");
		}	
		else
		{
			x++;
			printf(" ");	
		}
	}
	
	return 0;
}
