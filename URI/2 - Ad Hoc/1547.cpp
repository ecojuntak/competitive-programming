#include <cstdio>

using namespace std;

int main()
{
	int a,b,c;
	int qwe[109];
	
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		int z=(-1) ,y=1;
		int coun=1,x=0;
		scanf("%d %d",&b,&c);
		for(int j=0;j<b;j++)
		{
			scanf("%d",&qwe[j]);
			if(qwe[j]==c) x=coun++;
			coun++;	
		}
		if(x==0)
		{
			coun=1;
			for(int j=0;j<b;j++)
			{
				if(qwe[j]-c==z || qwe[j]-c==y) 
				{
					x=coun++;
					break;	
				}
				coun++;	
			}
		}
		printf("%d\n",x);
	}
	
	return 0;
}
