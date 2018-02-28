#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a,b;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		if(i%2==0)
		{
			b=pow(i,2);
			printf("%d^2 = %d\n",i,b);
		}
	}
}
