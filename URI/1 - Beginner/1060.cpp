#include <cstdio>

using namespace std;

int main()
{
	int qwe[8],sum=0;
	for(int i=0;i<6;i++)
	{
		scanf("%d",&qwe);
		if(qwe[i]>0)
		{
			sum++;
		}
	}
	printf("%d valores positivos\n",sum);
	
	return 0;
}
