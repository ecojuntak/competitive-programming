#include <cstdio>

using namespace std;

int main()
{
	int asd[10000];
	int a;
	int b,sum=0;
	
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&asd[b]);
		sum = sum + asd[b];
	}
	printf("%d\n",sum);
	
	return 0;
}
