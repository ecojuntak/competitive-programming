#include <bits/stdc++.h>

using namespace std;

int dx[8] = {0,0,1,-1};
int dy[8] = {1,-1,0,0};

int n,m;

bool valid(int x,int y)
{
	return x>=1 && x<=n && y>=1 && y<=m;
}

int main()
{
	int c,total;
	int qwe[105][105];
	pair <int,int> result;
	
	result.first=0;
	result.second=0;
	
	cin>>n>>m>>c;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&qwe[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
//			printf("%d %d >> ",i,j);
			total = 1;
			for(int k=0;k<4;k++)
			{
				int x = i + dx[k];
				int y = j + dy[k];
				
				if(valid(x,y)) 
				{
//					printf("%d %d   ",x,y);
					total *= qwe[x][y];
				}	
			}
			
//			printf("total %d\n",total);
			
			if(total==c)
			{
				if(result.first==0 || result.second==0)
				{
					result.first = i;
					result.second = j;	
				}
				
				if(result.second > j)
				{
					result.second = j;
					result.first = i;
				}
				else if(result.second == j && i < result.first)
				{
					result.second = j;
					result.first = i;
				}
			}
		}
	}
	
//	sort(data.begin(),data.end());
	
	printf("%d %d\n",result.first,result.second);
	
	return 0;
}
