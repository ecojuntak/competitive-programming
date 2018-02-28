#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,qwe[109],sum=0;
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&qwe[i]);
	}
	for(int i=1;i<a-1;i++)
	{
		if(qwe[i]>=qwe[i+1]) sum++;
	}
	printf("%d\n",sum);
	return 0;
}
