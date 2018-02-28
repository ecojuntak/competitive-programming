#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	char qwe[100009];
	scanf("%s",&qwe);
	int x=0,y=0;
	
	for(int i=0;i<strlen(qwe);i++)
	{
		if(qwe[i]=='A' && qwe[i+1]=='B' && qwe[i+2]!='A') x=1;
		if(qwe[i]=='B' && qwe[i+1]=='A' && qwe[i+2]!='B') y=1;
	}
	
	if(x==1 && y==1) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
