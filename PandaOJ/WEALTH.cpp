#include <cstdio>

using namespace std;

int main()
{
	int i;
	int qwe[100009];
	int maks=0;
	
	scanf("%d",&i);
	
	for(int a=0;a<i;a++)
	{
		scanf("%d",&qwe[a]);
		if(qwe[a]>maks)
		{
			maks=qwe[a];
		}
	}
	printf("%d\n",maks);
	
	return 0;
}
