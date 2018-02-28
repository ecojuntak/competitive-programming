#include <cstdio>

using namespace std;

int main()
{
	int a,x=0;
	int qwe[1009];
	scanf("%d",&a);
	
	for(int i=0;i<1000;i++)
	{
		qwe[i]=x;
		if(x==a-1)
		{
			x=0;
		}
		else x++;
	}
	
	for(int i=0;i<1000;i++)
	{
		printf("N[%d] = %d\n",i,qwe[i]);
	}
	
	return 0;
}
