#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	char qwe[1006];
	
	cin>>t;
	
	while(t--)
	{
		int ki=0, ka=0, co=0;
		scanf("%s",&qwe);
		
		for(int i=0;i<strlen(qwe);i++)
		{
			if(qwe[i]=='<' && ki>=ka) ki++;
			else if(qwe[i]=='>' && ki)
			{
				ki--; co++;
			}
		}
		
		printf("%d\n",co);
	}
	
	return 0;
}
