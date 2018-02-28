#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair <int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int dr[8] = {0,0,-1};
int dc[8] = {1,-1,0};

int n,m,langkah=0;
string maze[101];
vi total;

inline string GetString(void)
{
    char x[1000005];
    gets(x);
    string s = x;
//    getline(cin,s);
    return s;
}

void dfs(int i,int j)
{
	char temp = maze[i][j];
	maze[i][j] = '#';
	if(temp=='.') langkah++;
	if(i==0 && temp==' ')
	{
//		printf(">>> path get, long %d\n",langkah);
		total.push_back(langkah);
	}
	
	for(int k=0;k<3;k++)
	{
		int x = i + dr[k];
		int y = j + dc[k];
		
//		printf("cek %d %d\n",x,y);
		
		if(x>=0 && x<n && y>=0 && y<m)
		{
			if((maze[x][y]==' ' || maze[x][y]=='.'))
			{
//				printf("posisi yg di proses %d %d\n",x,y);
				dfs(x,y);
			}
		}
	}
	
	if(temp=='.') langkah--;
	maze[i][j] = temp;
}

void printMap()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%c",maze[i][j]);
		}
		printf("\n");
	}
	printf("maze printed\n");
}

int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{		
		scanf("%d %d",&n,&m);
		n = (n*2)+1;
		while(getchar()!='\n');
		
		for(int i=0;i<n;i++)
		{
			char x [10000];
//			string baris = GetString();
//			getline(cin,baris);
			gets(x);
			maze[i] = x;
//			printf("iiiii %d\n",i);
		}

		for(int i=0;i<m;i++)
		{
//			printf("%d\n",i);
			if(maze[n-1][i]==' ')
			{
//				printf("first door %d %d\n",(n-1),i);
				dfs(n,i);
			}
		}
		
//		printMap();
		sort(total.begin(),total.end());
		
//		for(int i=0;i<total.size();i++)
//			printf("%d ",total[i]);
		
		printf("%d\n",total[total.size()-1]);
		
		total.clear();
	}
	
	
	return 0;
}
