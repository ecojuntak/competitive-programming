#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int qwe[100005];
	int a;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		int b,sum=0;
		scanf("%d",&b);
		
		for(int j=0;j<b;j++)
		{
			scanf("%d",&qwe[j]);
		}
		sort(qwe,qwe+b);
		for(int j=b-1;j>=b-5;j--)
		{
			sum=sum+qwe[j];
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
