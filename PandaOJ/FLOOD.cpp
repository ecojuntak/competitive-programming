#include <bits/stdc++.h>

using namespace std;

int t,n,m;
char maze[105][105];

void dfs(int i,int j){
    //cout<<i<<" "<<j<<endl;
    if(i<0 || i>=n || j<0 || j>=m) return;
    if(maze[i][j] == '#') return;
    maze[i][j] = '#';

    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
}

void gas(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maze[i][j] == '.' && ((j==0 || j==m-1) || (i==0 || i==n-1))){
                //cout<<i<<" "<<j<<endl;
                dfs(i,j);
            }
        }
    }
}

bool checkMaze(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maze[i][j] == '.'){
                return true;
            }
            //cout<<maze[i][j];
        }
        //cout<<endl;
    }
    return false;
}

int main(){
    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>n>>m;
        memset(maze,'.',sizeof(maze));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>maze[i][j];
            }
        }
        gas();
        if(checkMaze()){
            printf("Case #%d: YA\n",i);
        }else{
            printf("Case #%d: TIDAK\n",i);
        }
    }


    return 0;
}
