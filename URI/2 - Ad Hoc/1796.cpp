#include <cstdio>

using namespace std;

int main()
{
	int a,x=0,y=0,b;
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b);
		if(b==1) x++;
		else if(b==0)y++;
	}
	
	if(y<x || y==x) printf("N\n");
	else if(y>x) printf("Y\n");
	
	return 0;
}
