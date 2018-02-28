#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int a;
	int x,y,r,x1,y1;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%d %d %d %d %d",&x,&y,&r,&x1,&y1);
		if(pow((x1-x),2) + pow((y1-y),2)==pow(r,2)) printf("Kasus #%d: GARIS\n",i);
		else if (pow((x1-x),2) + pow((y1-y),2)<pow(r,2)) printf("Kasus #%d: DALAM\n",i);
		else if (pow((x1-x),2) + pow((y1-y),2)>pow(r,2)) printf("Kasus #%d: LUAR\n",i);
	}
		
	return 0;
}
