#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	scanf("%d",&a);
	
	for(int b=1;b<=a;b++)
	{
		int c;
		int qwe[1009];
		scanf("%d",&c);
		
		for(int d=0;d<c;d++)
		{
			scanf("%d",&qwe[d]);
		}
		sort(qwe,qwe+c);
		for(int d=c-1;d>=0;d--)
		{
			printf("%d",qwe[d]);
			if(d!=0)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
