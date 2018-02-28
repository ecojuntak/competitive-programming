#include <bits/stdc++.h>

using namespace std;

int main()
{
	char qwe[105];
	
	scanf("%s",&qwe);
	
	for(int i=0;i<strlen(qwe);i++)
	{
		if(qwe[i]>=65 && qwe[i]<=90)
			printf("%c",qwe[i]+32);
		else printf("%c",qwe[i]-32);
	}
	
	printf("\n");
	
	return 0;
}
