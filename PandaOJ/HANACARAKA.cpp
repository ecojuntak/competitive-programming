#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char qwe[4005];
	int x=0;
	
	scanf("%s",&qwe);
	
	for(int i=strlen(qwe)-1;i>=0;)
	{
		if(qwe[i]=='a' || qwe[i]=='i' || qwe[i]=='u' || qwe[i]=='e' || qwe[i]=='o' )
		{
			printf("%c",qwe[i]);
			i=i-3;
		}	
		else
		{
			printf("%c",qwe[i]);
			i--;	
		}
		
	}
	
	printf("\n");
	
	return 0;
}
