#include <cstdio>

using namespace std;

int main()
{
	int a;
	int sum=1;
	scanf("%d",&a);
	
	while(a!=0)
	{
		sum=sum*a;
		a--;
	}
	
	printf("%d\n",sum);
	
	return 0;
}
