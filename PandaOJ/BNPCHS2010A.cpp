#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,qwe[100000];
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		int max=0,counter=1;
		scanf("%d",&b);
		for(int j=0;j<pow(2,b);j++)
		{
			scanf("%d",&qwe[j]);
			if(qwe[j]>max)
			{
				max=qwe[j];
			}
		}

		for(int j=0;j<pow(2,b);j++)
		{
			if(qwe[j]!=max)
			{
				counter++;
			}
			else if (qwe[j]==max)
			{
				break;
			}
		}
		printf("%d\n",counter);
	}
	return 0;
}
