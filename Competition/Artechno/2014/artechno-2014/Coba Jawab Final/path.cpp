#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[10005];
	int x=0,y=0;
	scanf("%s",&qwe);
	
	for(int i=0;i<strlen(qwe);i++)
	{
		if(qwe[i]=='>')
		{
			x++;
		}
		else if(qwe[i]=='<')
		{
			x--;
		}
		else if(qwe[i]=='^')
		{
			y++;
		}
		else if(qwe[i]=='V' || qwe[i]=='v')
		{
			y--;
		}
	}
	printf("(%d,%d)\n",x,y);
	
	return 0;
}
