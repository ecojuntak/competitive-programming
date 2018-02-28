#include <cstdio>

using namespace std;

int main()
{
	int a,b,c;
	unsigned long long int r,sum,sam,x,y;
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%d %d",&b,&c);
		x=(b*c);
		sum = x*(x+1)/2;
		y=(b*1)-1;
		sam = y*(y+1)/2;
		printf("Kasus %d: %llu\n",i,sum-sam);
	}
	
	return 0;
}
