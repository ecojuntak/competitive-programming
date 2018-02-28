#include <bits/stdc++.h>

using namespace std;

int n,m,k;

vector<string> updateMaze(vector<string> maze, char a, char b){
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            if(maze[i][j]==b){
                maze[i][j]=a;
                //cout<<"update"<<endl;
            }
            //cout<<"cell > "<<maze[i][j]<<" to change > "<<a;
        }
    }
    return maze;
}


int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int mb,mk,km,kb,bm,bk;

        mb = mk = km = kb = bm = bk = 0;
        cin >> n >> m >> k;
        vector<string> grid(n);
        for(int grid_i = 0; grid_i < n; grid_i++){
           cin >> grid[grid_i];
        }

        for(int a1 = 0; a1 < k; a1++){
            char x;
            char y;
            cin >> x >> y;
            if(x=='M' && y=='B') mb++;
            else if(x=='M' && y=='K') mk++;
            else if(x=='K' && y=='B') kb++;
            else if(x=='K' && y=='M') km++;
            else if(x=='B' && y=='M') bm++;
            else if(x=='B' && y=='K') bk++;

            if(bk==3){
                grid = updateMaze(grid,'B', 'K');
            }else if(bm == 3){
                grid = updateMaze(grid,'B', 'M');
            }else if(km == 3){
                grid = updateMaze(grid, 'K', 'M');
            }else if(kb == 3){
                grid = updateMaze(grid, 'K', 'B');
            }else if(mk == 3){
                grid = updateMaze(grid, 'M', 'K');
            }else if(mb == 3){
                grid = updateMaze(grid, 'M', 'B');
            }
        }

        printf("Case #%d:\n",a0+1);
        for(int i=0; i<n; i++){
            for(int j=0;j<m;j++){
                cout<<grid[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}
