#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[100];
	scanf("%s",&qwe);
	strlwr(qwe);
	
	for(int i=0;i<strlen(qwe);i++)
	{
		if(qwe[i]=='a' || qwe[i]=='o' || qwe[i]=='y' || qwe[i]=='e' || qwe[i]=='u' || qwe[i]=='i') continue;
		else printf(".%c",qwe[i]);
	}	
	printf("\n");
	
	return 0;
}
