#include <cstdio>

using namespace std;

int main()
{
	int a,coun=0;
	
	scanf("%d",&a);
	
	while(coun<6)
	{
		if(a%2==1)
		{
			coun++;
			printf("%d\n",a);
		}
		a++;
	}
	return 0;
}
