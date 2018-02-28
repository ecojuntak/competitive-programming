#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int a;
	char qwe[109];
	
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		scanf("%s",&qwe);
		printf("Kasus #%d: ",i);
		for(int j=0;j<strlen(qwe);)
		{
			int y=0;
			if(qwe[j]=='.') 
			{
				printf(".");
				j++;
			}
			else
			{
				y++;
				for(int k=j+1;k<strlen(qwe);k++)
				{
					if(qwe[k]=='X') y++;
					else break;
				}
				
				if(y%2==1)
				{
					int m=(y/2),z=0;
					for(int k=j;k<j+y;k++)
					{
						if(z==m) printf("X");
						else printf(".");
						z++;
					}
				}
				else
				{
					for(int k=j;k<j+y;k++)
					{
						printf(".");
					}
				}
				j+=y;
			}
		}
		printf("\n");
	}
	
	return 0;
}
