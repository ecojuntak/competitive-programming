#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	int i;
	char qwe[1005];
	scanf("%d",&i);
	while(getchar()!='\n');
	
	for(int j=1;j<=i;j++)
	{
		int x=0,y=0;
		gets(qwe);
		
		for(int k=0;k<strlen(qwe);k++)
		{
			if(qwe[k]=='U')
			{
				y=y+1;
			}
			else if(qwe[k]=='B')
			{
				x=x-1;
			}
			else if(qwe[k]=='S')
			{
				y=y-1;
			}
			else if(qwe[k]=='T')
			{
				x=x+1;
			}
		}
		int m=abs(x)+abs(y);
		printf("Kasus #%d: %d\n",j,m);
	}
	
	return 0;
}
