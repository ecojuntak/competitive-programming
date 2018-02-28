#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int d=1,c;
		scanf("%d %d",&b,&c);
		int e=c;
		while(c<b)
		{
			c=c+e;
			d++;			
		}
		printf("Kasus #%d: %d\n",i,d);
	}
	
	return 0;
}
