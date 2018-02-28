#include <cstdio>

using namespace std;

int main()
{
	unsigned long long int qwe[69];
	int a,j;
	
	qwe[0]=0;
	qwe[1]=1;
	
	for(int i=2;i<=60;i++)
	{
		qwe[i]=qwe[i-1]+qwe[i-2];
	}
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&j);
		printf("Fib(%d) = %llu\n",j,qwe[j]);
	}
	
	return 0;
}
