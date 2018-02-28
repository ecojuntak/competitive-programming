#include <cstdio>

using namespace std;

int main()
{
	int max=0,pos=1,qwe[105];	
	
	for(int i=0;i<100;i++)
	{
		scanf("%d",&qwe[i]);
		if(qwe[i]>max)
		{
			max=qwe[i];
		}
	}
	
	for(int i=0;i<100;i++)
	{
		if(qwe[i]==max)
		{
			break;
		}
		else pos++;
	}
	
	printf("%d\n",max);
	printf("%d\n",pos);
	return 0;
}
