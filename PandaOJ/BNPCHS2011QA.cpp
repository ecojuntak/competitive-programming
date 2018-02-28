#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int a,b;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int sum=0;
		scanf("%d",&b);
		if(b==1)
		{
			printf("%d\n",sum);	
		}
		else if(b>1)
		{
			sum=pow(b,3)-pow(b-2,3);
			printf("%d\n",sum);
		}
	}
	
	return 0;
}
