#include <cstdio>

using namespace std;

int main()
{
	int a;

	scanf("%d",&a);
	while(a!=0)
	{
		int sum=0;
		if(a%2==0)
		{
			for(int i=1;i<=5;i++)
			{
				sum=sum+a;
				a=a+2;
			}
		}
		else
		{
			a=a+1;
			for(int i=1;i<=5;i++)
			{
				sum=sum+a;
				a=a+2;
			}
		}
		printf("%d\n",sum);
		scanf("%d",&a);
	}	

	return 0;
}
