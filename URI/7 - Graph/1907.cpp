#include <bits/stdc++.h>

using namespace std;

int n,m;

int dn[8]={0,0,1,-1};
int dm[8]={1,-1,0,0};

char maze[1025][1025];

inline string GetString(void){
    char x[1000005];
    scanf("%s",x); string s = x;
    return s;
}

void dfs(int i, int j)
{
	for(int k=0;k<4;k++)
	{
		int nPos = i+dn[k];
		int mPos = j+dm[k];
		
		if(nPos<0 || nPos>=n || mPos<0 || mPos>=m || maze[nPos][mPos]=='o') continue;
		else
		{
			maze[nPos][mPos] = 'o';
			dfs(nPos,mPos);	
		}
	}
}

int main()
{	
	int co=0;
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++)
	{
//		string baris= GetString();
		scanf("%s",&maze[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(maze[i][j]=='.')
			{
				co++;
				dfs(i,j);
			}
		}
	}
	
	printf("%d\n",co);
	
	return 0;
}
