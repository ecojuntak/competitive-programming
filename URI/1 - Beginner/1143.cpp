#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int a,x;
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=3;j++)
		{
			x=pow(i,j);	
			printf("%d",x);
			if(j!=3) printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
