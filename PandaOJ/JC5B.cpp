#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,c,d;
	long long int qwe[10000];
	
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		int sum=0;
		scanf("%d",&c);
		for(d=0;d<c;d++)
		{
			scanf("%lld",&qwe[d]);
		}
		
		sort(qwe,qwe+c);
				
		for(d=0;d<c;d++)
		{
			if(qwe[d]!=qwe[d+1])
			{
				sum=sum+1;
			}
		}
		printf("Case #%d: %d\n",b,sum);
	}
}
