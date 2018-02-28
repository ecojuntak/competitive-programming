#include <cstdio>

using namespace std;

int main()
{
	int a,n;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&n);
		printf("%d\n",((n*n+1)*n)/2);
	}
	
	return 0;
}
