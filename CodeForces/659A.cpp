#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	int x = abs(c);
	int temp = b;
	
	if(a==1) printf("1\n");
	else
	{
	if(c<0)
	{
		for(int i=1;i<=x;i++)
		{
			temp--;
			if(temp == 0) temp = a;
		}
	}
	else
	{
		for(int i=1;i<=x;i++)
		{
			temp++;
			if(temp == a)
			{
				if(i!=x) temp = 0;	
			}

		}
	}
	printf("%d\n",temp);
	}
	
	
	
	return 0;
}
