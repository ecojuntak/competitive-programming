#include <bits/stdc++.h>

using namespace std;

int main()
{
	char qwe[100];
	
	scanf("%s",&qwe);
	
	for(int i=strlen(qwe)-1;i>=0;i--)
		printf("%c",qwe[i]);

	printf("\n");
		
	return 0;
}
