#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,qwe[10023];
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		int idx=1;
		scanf("%d %d",&b,&c);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&qwe[j]);
		}
		for(int j=0;j<b;j++)
		{
			if(qwe[j]==c)
			{
				printf("%d\n",idx);
				break;
			}
			else
			{
				idx++;
			}
		}
		
	}
	
	return 0;
}
