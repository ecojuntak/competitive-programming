#include <cstdio>

using namespace std;

int main()
{
	int a,b;
	int x=0;
	
	scanf("%d",&a);
	for(int i=0;i<5;i++)
	{
		scanf("%d",&b);
		if(b==a) x++;
	}
	
	printf("%d\n",x);
	return 0;
}
