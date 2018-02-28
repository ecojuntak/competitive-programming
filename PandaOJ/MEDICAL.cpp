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
		int x=0, y=0;
		
		scanf("%s",&qwe);
		int len=strlen(qwe);
		
		for(int j=0;j<len;j++)
		{
			if(qwe[j]=='.') x++;
			else if(qwe[j]=='#') y++;
		}
		
		float bb=0.4*len;
		float ba=0.9*len;
		
		if(y<bb || y>=ba) printf("Case #%d: CRITICAL\n",i);
		else printf("Case #%d: NORMAL\n",i);
	}
	
	return  0;
}
