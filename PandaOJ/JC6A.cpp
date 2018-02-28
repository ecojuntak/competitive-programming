#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a,x=1;
	
	scanf("%d",&a);
	for(int i=1;i<=a;)
	{
		printf("mb");
		i=i+2;
		for(int k=0;k<x;k++)
		{
			printf("e");
			i++;
		}
		x++;
	}
	
	printf("\n");
	return 0;
}
