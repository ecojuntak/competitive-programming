#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int a,b,c,x;
	float y,sum=0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	float qwe[a];
	
	for(int i=0;i<a;i++)
		qwe[i]=0;
	
	for(int i=0;i<b;i++)
	{
		for(int j=0;j<a;j++)
		{
			scanf("%d %f",&x,&y);
			if(qwe[x-1]<y) qwe[x-1]=y;
		}
		
	}
	
	sort(qwe,qwe+a);
	
	for(int i=a-1;i>=(a-c);i--)
	{
		sum+=qwe[i];
	}
	
	printf("%.1f\n",sum);
	
	return 0;
}
