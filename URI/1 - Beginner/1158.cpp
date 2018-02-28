#include <cstdio>

using namespace std;

int main()
{
	int a;
	int x,y;
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		int sum=0,j=0;
		scanf("%d %d",&x,&y);
		while(j!=y)
		{
			if(x%2==1) 
			{
				sum=sum+x;
				j++;	
			}
			x++;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
