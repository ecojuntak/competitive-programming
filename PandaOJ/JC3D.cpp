#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,d,e,f;
	int asd[100];
	
	scanf("%d",&a);

	for(b=1;b<=a;b++)
	{
		int min=0;
		scanf("%d %d",&c,&d);
		for(e=0;e<c;e++)
		{
			scanf("%d",&asd[e]);
			if(asd[e]>min && asd[e]<=d)
			{
				min=asd[e];
				f=1;
			}
		}
		
		if(min)
		{
			printf("Case #%d: %d\n",b,min);
		}
		else if(min==0)
		{
			printf("Case #%d: HAPPY BIRTHDAY ANTONIO\n",b);
		}
	}
	
	return 0;
}
