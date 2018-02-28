#include <cstdio>

using namespace std;

int main()
{
	int a;
	int time,gtm;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		int asli=0;
		scanf("%d %d",&time,&gtm);
		if(time==24) time=0;
		if(time>12) asli=time-24+gtm;	
		else asli=time+gtm;
		if(asli<0) asli=24+asli;
		if(asli==24) asli=0;
		printf("Case #%d: %.2d\n",i,asli);
	}
	
	return 0;
}
