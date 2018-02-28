#include <cstdio>

using namespace std;

int main()
{
	float a,ave,sum=0;
	int coun=0;
	
	for(int i=0;i<6;i++)
	{
		scanf("%f",&a);
		if(a>0)
		{
			sum=sum+a;
			coun++;
		}
	}
	printf("%d valores positivos\n",coun);
	printf("%.1f\n",sum/coun);
}
