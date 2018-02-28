#include <cstdio>

using namespace std;

int main()
{
	int qwe[21];
	int asd[21];
	
	for(int i=0;i<20;i++)
	{
		scanf("%d",&qwe[i]);
	}
	
	int x=0;
	for(int i=19;i>=0;i--)
	{
		asd[i]=qwe[x];
		x++;
	}
	
	for(int i=0;i<20;i++)
	{
		printf("N[%d] = %d\n",i,asd[i]);
	}
	
	return 0;
}
