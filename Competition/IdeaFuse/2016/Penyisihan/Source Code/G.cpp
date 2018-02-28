#include <cstdio>

using namespace std;

int main()
{
	int a,temp,z;
	char qwe[15];
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%s",&qwe);
		
		for(int j=0;j<=10;j++)
		{
			if(qwe[j]=='*')
			{
				z=j+1;
				for(z;z<=10;z=z+z)
				{
					printf("%d ",z);	
				}		
			}
		}
		printf("Case #%d: %d\n",i,z);
	}
	
	return 0;
}
