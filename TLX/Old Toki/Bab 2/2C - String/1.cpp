#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	char qwe[100000];
	scanf("%d",&a);
	
	for(int i=0;i<a;i++)
	{
		int x=0;
		int y=0;
		scanf("%s",&qwe);
	
		
		for(int j=strlen(qwe)-1;j>=0;j--)
		{
			if(qwe[j]=='0') y++;
		}
	
		if(y==strlen(qwe)) 
		{
			printf("0");	
		}
		else
		{
			for(int j=strlen(qwe)-1;j>=0;j--)
			{
				if(qwe[j]!='0') x=1;
				if(qwe[j]=='0' && x==0) continue;
				else printf("%c",qwe[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
