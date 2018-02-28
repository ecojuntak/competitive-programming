#include <bits/stdc++.h>

using namespace std;

int main()
{
	int qwe[5][5];
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&qwe[i][j]);
			
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",qwe[j][i]);
			if(j!=2) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
