#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

int main(){
    int n,m;
    char maze[101][101];
    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin>>c;
            maze[i][j] = c;
        }
    }


    int rep=0;

    while(true){
        int j=0;
        int i=m-rep;
        if(i==-1) break;
        while(true){
            if(i==m || j==n) break;
            printf("%c",maze[j][i]);
            //printf("%d,%d\n",j,i);
            i++;
            j++;
        }
        rep++;
    }

    int i=1;
    int j=0;
    int repI = 1;
    int repJ = 0;
    while(true){
        i = repI;
        j = 0;
        if(i==n) break;
        while(true){
            if(i==n || j==-1) break;
            printf("%c",maze[i][j]);
            //printf("%d,%d\n",i,j);
            j++;
            i++;
        }
        repI++;
        //repJ++;
    }

    printf("\n");
    return 0;
}
