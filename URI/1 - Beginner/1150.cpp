#include <cstdio>

using namespace std;

int main()
{
	int a,b,i=0;
	int sum=0;
	scanf("%d",&a);
	scanf("%d",&b);
	while(a>=b)
	{
		scanf("%d",&b);
	}

	while(sum<b)
	{
		sum=sum+a;
		a++;
		i++;
	}
	
	printf("%d\n",i);
	
	return 0;
}
