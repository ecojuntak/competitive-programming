#include <cstdio>

using namespace std;

int main()
{
	double s=0,x;
	for(int i=1;i<=100;i++)
	{
		x=1/i;
		s=s+x;
	}
	
	printf("%.2lf\n",s);
	
	return 0;
}
