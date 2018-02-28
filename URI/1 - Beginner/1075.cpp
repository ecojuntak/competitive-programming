#include <cstdio>

using namespace std;

int main()
{
	int a;
	scanf("%d",&a);
	
	for(int i=0;i<=10000;i++)
	{
		if(i%a==0)
		printf("%d\n",i+2);
	}
	
	return 0;
}
