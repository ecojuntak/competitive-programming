#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[1009];

	scanf("%s",&qwe);
	
	for(int i=0;i<strlen(qwe);i++)
	{
		if(i==0 && qwe[i]>90) printf("%c",(int)qwe[0]-32);
		else printf("%c",qwe[i]);
	}
	printf("\n");
	return 0;
}
