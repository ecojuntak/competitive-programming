#include <cstdio>

using namespace std;

int main()
{
	double a;
	double qwe[106];
	
	scanf("%lf",&a);
	qwe[0]=a;
	printf("N[0] = %.4lf\n",qwe[0]);
	
	for(int i=1;i<100;i++)
	{
		qwe[i]=qwe[i-1]/2;
		printf("N[%d] = %.4lf\n",i,qwe[i]);
	}
	
	return 0;
}
