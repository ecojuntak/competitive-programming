#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a,x;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		printf("%d ",i);
		for(int j=2;j<=3;j++)
		{
			x=pow(i,j);
			printf("%d",x);
			if(j!=i+2) printf(" ");
		}
		
		printf("\n");
		
		printf("%d ",i);
		for(int j=2;j<=3;j++)
		{
			x=pow(i,j);
			printf("%d",x+1);
			if(j!=i+2) printf(" ");
		}
		
		printf("\n");
	}
	
	return 0;
}
