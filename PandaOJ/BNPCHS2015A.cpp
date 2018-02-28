#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c;
	
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		int x=0,y=0,z=0;
		scanf("%d",&b);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&c);
			if(c==1) x++;
			else if(c==2) y++;
			else if(c==3) z++;
		}
		int n = min(x,y);
		int m = min(z,n);
		printf("Kasus #%d: %d\n",i,m);	
	}
	
	return 0;
}
