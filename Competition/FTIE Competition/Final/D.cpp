#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

int t;
int n,m,k;

int main(){
    cin>>t>>n>>m>>k;
    char x,y;
    vector<string> maze(n);

    for(int i=1;i<=t;i++){
        int mb,mk,bm,bk,km,kb;
        mb = mk = bm = bk = km = kb = 0;
        for(int j=0; j<n;j++){
            cin>>maze[j];
        }

        for(int j=0; j<k; j++){
            cin>>x>>y;
            if(x=='M' && y=='K') mk++;
            else if(x=='M' && y=='B') mb++;
            else if(x=='B' && y=='K') bk++;
            else if(x=='B' && y=='M') bm++;
            else if(x=='K' && y=='B') km++;
            else if(x=='K' && y=='M') kb++;
        }

        if(km==3) maze = updateMaze(maze,'K','M');
        if(kb==3) maze = updateMaze(maze,'K','M');
        if(k==3) maze = updateMaze(maze,'K','M');
        if(km==3) maze = updateMaze(maze,'K','M');
        if(km==3) maze = updateMaze(maze,'K','M');
        if(km==3) maze = updateMaze(maze,'K','M');
    }

    return 0;
}
