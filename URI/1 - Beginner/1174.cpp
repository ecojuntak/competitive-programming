#include <cstdio>

using namespace std;

int main()
{
	float a,qwe[109];
	int i=0;
	
	while(i!=100)
	{
		scanf("%f",&a);
		if(a<=10)
		{
			qwe[i]=a;
			i++;
		}
	}
	
	for(int i=0;i<100;i++)
	{
		printf("A[%d] = %.1f\n",i,qwe[i]);
	}
	
	return 0;
}
