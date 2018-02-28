#include <cstdio>

using namespace std;

int main()
{
	int a,b,c;
	scanf("%d",&a);	
	for(int i=1;i<=a;i++)
	{
		int sum=0;
		scanf("%d",&b);
		for(int j=1;j<=b;j++)
		{
			scanf("%d",&c);
			sum=sum+c;
		}
		if(sum>64000)
		{
			printf("Case #%d: 128GB\n",i);
		}
		else if(sum>32000)
		{
			printf("Case #%d: 64GB\n",i);
		}
		else if(sum>16000)
		{
			printf("Case #%d: 32GB\n",i);
		}
		else if(sum<=16000)
		{
			printf("Case #%d: 16GB\n",i);
		}
	}
	
	return 0;
}
