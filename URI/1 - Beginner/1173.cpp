#include <cstdio>

using namespace std;

int main()
{
	int a;
	
	scanf("%d",&a);
	
	int b=a;
	
	for(int i=0;i<10;i++)
	{
		if(i==0)
		{
			printf("N[%d] = %d\n",i,a);
		}
		else if(i>0)
		{
			printf("N[%d] = %d\n",i,b*2);
			b=b*2;
		}
		
	}
	
	return 0;
}
