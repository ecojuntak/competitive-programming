#include <cstdio>

using namespace std;

int main()
{
	int a,x,y;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d %d",&x,&y);
		if(y==0) printf("divisao impossivel\n");
		else printf("%.1f\n",(float)x/y);
	}
	
	return 0;
}
