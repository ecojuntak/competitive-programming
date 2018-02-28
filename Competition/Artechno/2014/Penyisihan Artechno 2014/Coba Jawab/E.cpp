#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,d,sum=1;
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++)
	{
		scanf("%d %d",&c,&d);
		sum=sum*pow(c,d);
	}
	printf("%d\n",sum%b);
	
	return 0;
}
