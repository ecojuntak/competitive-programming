#include <cstdio>

using namespace std;

int main()
{
	int a,sum,i=0;
	scanf("%d",&a);
	while(a>0)
	{
		sum=sum+a;
		scanf("%d",&a);
		i++;
	}
	
	printf("%.2f\n",(float)sum/i);
	
	return 0;
}
