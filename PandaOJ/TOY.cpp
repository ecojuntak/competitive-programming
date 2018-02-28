#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,c,d,e;
	int qwe[105];
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%d %d",&b,&c);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&qwe[j]);
		}
		sort(qwe,qwe+b);
		
		for(int j=0;j<c;j++)
		{
			int sum=0;
			scanf("%d %d",&d,&e);
			for(int m=0;m<b;m++)
			{
				if(qwe[m]>d && qwe[m]<e)
				{
					sum++;
				}
			}
			if(j==0)
			{
				printf("Kasus #%d:\n",i);	
			}
			printf("%d\n",sum);
		}
		
	}
	
	//edited for test gitlab
	//test
	//test
	
	return 0;
}
