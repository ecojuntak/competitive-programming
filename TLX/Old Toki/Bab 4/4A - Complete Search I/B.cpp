#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,m,count;
	char qwe[100][100];
	scanf("%d",&t);
	
	while(t--)
	{
		count = 0;
		scanf("%d %d",&n,&m);
		
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				scanf("%c",&qwe[i][j]);
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(qwe[0][j]!='#') break;
				else if(qwe[m-1][j]!='#') break;
				else if(qwe[i][0]!='#') break;
				else if(qwe[i][m-1]!='#') break;
				else count++;
			}
		}
		if(count!=n*m) printf("YA\n");
		else printf("TIDAK\n");
	}
	
	return 0;
}
