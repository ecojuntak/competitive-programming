#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		scanf("%d %d %d",&b,&c,&d);
		if(d>2000)
		{
			e=((d-2000)/100)*c;
			printf("%d\n",b+e);
		}
		else
		{
			printf("%d\n",b);
		}
		
	}
	
	
	return 0;
}
