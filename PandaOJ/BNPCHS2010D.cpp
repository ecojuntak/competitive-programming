#include <cstdio>

using namespace std;

int main()
{
	int x,a,b,c,d;
	scanf("%d",&x);
	
	for(int i=0;i<x;i++)
	{
		long long int sum=0;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for(int j=a;j<=b;j++)
		{
			if(j%c==0 && j%d!=0)
			{
				sum=sum+j;
			}
		}
		printf("%lld\n",sum);
	}
	
	return 0;
}
