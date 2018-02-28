#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a,b;
	int qwe[20009];
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&qwe[j]);
		}
		
		sort(qwe,qwe+b);
		
		int x=1;
		int sum=0;
		
		for(int j=b-1;j>=0;j--)
		{
			if(x==3)
			{
				sum=sum+qwe[j];
				x=1;
			}
			else x++;
		}
		
		printf("%d\n",sum);
	}
	
	
	return 0;
}
