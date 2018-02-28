#include <bits/stdc++.h>

using namespace std;

int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

char maze[15][15];
int x,y;

int bfs(pair<int,int> s){
    int langkah = 0;
    int xpos, ypos;
    queue<pair <int,int > > q;
    q.push(s);

    while(!q.empty()){
        langkah++;

        int sizeQ = q.size();

        for(int z=0; z<sizeQ; z++){
            pair<int,int> pos = q.front();
            q.pop();

            maze[pos.first][pos.second] = '#';
//            cout<<"start from "<<pos.first<<","<<pos.second<<endl;

            for(int i=0; i<4; i++){
                xpos = pos.first + dx[i];
                ypos = pos.second + dy[i];

//                cout<<"processing "<<xpos<<","<<ypos<<endl;

                if(xpos < 0 || xpos >= x || ypos < 0 || ypos >= y) continue;
                if(maze[xpos][ypos] == 'H') return langkah;
                else if(maze[xpos][ypos] == '.'){
//                    cout<<"get at "<<xpos<<","<<ypos<<endl;
                    q.push(make_pair(xpos,ypos));
                }
                maze[xpos][ypos] = '#';
            }
        }
    }
}

int main(){
    int t,n;
    bool ada = true;
    pair<int,int> s,d;
    cin>>t;

    while(t--){
        cin>>x>>y;

        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cin>>maze[i][j];
                if(maze[i][j] == 'H'){
                    s = make_pair(i,j);
                }
            }
        }

//        for(int i=0; i<x; i++){
//            for(int j=0; j<y; j++){
//                cout<<maze[i][j];
//            }
//            cout<<"\n";
//        }

        cout<<bfs(s)<<endl;
    }

    return 0;
}
