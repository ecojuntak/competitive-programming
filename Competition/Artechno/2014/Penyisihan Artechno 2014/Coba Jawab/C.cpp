#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	for(int j=2;j<=a+1;j++)
	{
		printf("%d",b*j);
		if(j!=a+1)
		{
			printf(" ");
		}
	}
	
	return 0;
}
