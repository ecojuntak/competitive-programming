#include <stdio.h>
#include <string.h>

int main()
{
	char ini[1000];
	int i,k;
	
	gets(ini);
	k=strlen(ini);
	
	for(i=k-1;i>=0;i--)
	{
		printf("%c",ini[i]);
	}
	printf("\n");
	return 0;
}
