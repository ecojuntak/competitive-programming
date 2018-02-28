#include <cstdio>

using namespace std;

int main()
{
	int a,b,x=0,y=0;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		if(b>=10 && b<=20)
		{
			x++;
		}
		else if(b<10 || b>20)
		{
			y++;
		}
	}
	printf("%d in\n",x);
	printf("%d out\n",y);
	return 0;
}
