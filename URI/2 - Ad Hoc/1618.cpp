#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int x[1000],y[1000],rx,ry;
	int xmin,xmax,ymin,ymax;
	
	scanf("%d",&t);
	
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<4;j++)
			scanf("%d %d",&x[j],&y[j]);
		
		sort(x,x+4); sort(y,y+4);
		
		xmin = x[0]; xmax = x[3];
		ymin = y[0]; ymax = y[3];
		
		printf("xmin = %d dan xmax %d\n",xmin,xmax);
		printf("ymin = %d dan ymax %d\n",ymin,ymax);
		
		if((rx>=xmin && rx<=xmax) && (ry>=ymin && ry<=ymax)) printf("1\n");
		else printf("0\n");
	}
	
	return 0;
}
