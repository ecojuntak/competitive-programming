#include <bits/stdc++.h>

using namespace std;

int main()
{
	char qwe[1006];
	
	
	while(scanf("%s",&qwe)!=EOF)
	{
		int ka=0;
		
		for(int i=0;i<strlen(qwe);i++)
		{
			if(qwe[i]=='(') ka++;
			else if(qwe[i]==')') ka--;
			
			if(ka<0) break;
		}
		
		if(ka<0 || ka>0) printf("incorrect\n");
		else printf("correct\n");
	}
	
	return 0;
}
