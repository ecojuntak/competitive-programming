#include <cstdio>

using namespace std;

int main()
{
	int x1,y1,x2,y2,x3,y3,xg,yg;
	int t=0,s=0,b=0,u=0,min=9999;
	
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	
	//utara
	yg=y3;
	while(yg!=y2+1)
	{
		u++;
		yg++;
	}
	if(u<min) min=u;
	
	//timur
	xg=x3;
	while(xg!=x2+1)
	{
		t++;
		xg++;	
	}	
	if(t<min) min=t;
	
	//selatan
	yg=y3;
	while(yg!=y1-1)
	{
		s++;
		yg--;
	}
	if(s<min) min=s;
	
	//barat
	xg=x3;
	while(xg!=x1-1)
	{
		b++;
		xg--;
	}
	if(b<min) min=b;
	
	printf("%d\n",min);
	
	return 0;
}
