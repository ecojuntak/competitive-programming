#include <cstdio>

using namespace std;

int main()
{
	int a;
	scanf("%d",&a);
	while(a!=0)
	{
		for(int i=1;i<=a;i++)
		{
			printf("%d",i);
			if(i!=a) printf(" ");	
		}
		printf("\n");
		scanf("%d",&a);
	}	
	
	return 0;
}
