#include <bits/stdc++.h>

using namespace std;

int dx[5] = {0,0,1,-1};
int dy[5] = {1,-1,0,0};

int x,y;
int maze[26][26];
int co,maks=0;

bool valid(int nowX, int nowY)
{
	return nowX >= 0 && nowX < x && nowY >= 0 && nowY < y;
}

void dfs(int i, int j, int bil)
{
//	printf("Asd\n");
	co++;
	maze[i][j] = 0;
	
	for(int k=0;k<4;k++)
	{
		int nowX = i+dx[k];
		int nowY = j+dy[k];
		
		if(valid(nowX,nowY) && maze[nowX][nowY] == bil) dfs(nowX,nowY,bil);
	}
}

int main()
{
	cin>>x>>y;
	
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++)
			cin>>maze[i][j];
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			co = 0;
			if(maze[i][j]!=0) dfs(i,j,maze[i][j]);
			
			if(maks<co) maks = co;
		}
	}
	
	printf("%d\n",maks*(maks-1));
	
	return 0;
}
