#include <cstdio>

using namespace std;

int main()
{
	int a;
	float x,y,z,qwe;
	
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		scanf("%f %f %f",&x,&y,&z);
		qwe=((x*2)+(y*3)+(z*5))/10;
		printf("%.1f\n",qwe);
	}
	return 0;
}
