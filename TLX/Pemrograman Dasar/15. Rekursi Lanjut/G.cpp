#include <bits/stdc++.h>

using namespace std;

int n,m;

int maze[30][30];
int bil;
int total = 0;

void dfs(int a, int b){
    //printf("%d,%d\n",a,b);
    if(maze[a][b] != bil) return;
    if(a<0 || a>n || b<0 || b>m) return;
    if(maze[a][b] == bil){
        total++;
        maze[a][b]=0;
    }
    dfs(a+1,b);
    dfs(a-1,b);
    dfs(a,b+1);
    dfs(a,b-1);
}

int main(){
    cin>>n>>m;
    int a,b;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d",&maze[i][j]);

    cin>>a>>b;

    bil = maze[a][b];

    dfs(a,b);

    cout<<total*(total-1)<<endl;

    return 0;
}
