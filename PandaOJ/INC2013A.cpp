#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a,b;
	char qwe[105];
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		int x=0,y=0,z=0;
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%s",&qwe);
			if(strlen(qwe)==4)
			{
				x++;
			}
			else if(strlen(qwe)==5)
			{
				y++;
			}
			else if(strlen(qwe)==6)
			{
				z++;
			}
		}
		printf("Case #%d: %d %d %d\n",i,x,y,z);
	}
	
	return 0;
}
