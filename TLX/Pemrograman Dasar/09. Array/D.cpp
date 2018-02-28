#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x,y;
	int qwe[105][105];
	
	cin>>x>>y;
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			scanf("%d",&qwe[i][j]);
		}
	}
	
	for(int i=0;i<y;i++)
	{
		for(int j=x-1;j>=0;j--)
		{
			printf("%d",qwe[j][i]);
			if(j!=0) printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
