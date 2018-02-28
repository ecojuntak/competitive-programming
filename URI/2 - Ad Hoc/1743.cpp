#include <cstdio>

using namespace std;

int main()
{
	int qwe[10];
	int asd[10];
	int x=0;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&qwe[i]);
	}
	for(int i=0;i<5;i++)
	{
		scanf("%d",&asd[i]);
	}
	for(int i=0;i<5;i++)
	{
		if(qwe[i]==asd[i])
		{
			printf("N\n");
			break;
		}
		x++;
	}
	if(x==5) printf("Y\n");
	return 0;
}
