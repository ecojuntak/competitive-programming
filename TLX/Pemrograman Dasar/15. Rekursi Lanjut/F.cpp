#include <bits/stdc++.h>

using namespace std;

int t,n,m,x,y;
vector<string> data;
int maze[130][130];

int makePowerOfTwo(int bil){
    int res;
    for(int i=1;i<=7;i++){
        int power = (int)pow(2,i);
        if(power >= bil){
            res = (int)pow(2,i);
            break;
        }
    }

    return res;
}

void changeMaze(string code, int yawal, int yakhir, int xawal, int xakhir){
    //printf("%d,%d - %d,%d\n",xawal,xakhir,yawal,yakhir);
    if(code.length() == 1){
        for(int i=xawal; i<=xakhir; i++){
            for(int j=yawal; j<=yakhir; j++){
                maze[i][j] = 1;
            }
        }
        return;
    }
    code.erase(code.begin());
    if(code[0] == '0'){
        changeMaze(code, yawal, (yawal+yakhir)/2, xawal, (xawal+xakhir)/2);
    }else if(code[0] == '1'){
        changeMaze(code, (yawal+yakhir)/2+1, yakhir, xawal, (xawal+xakhir)/2);
    }else if(code[0] == '2'){
        changeMaze(code, yawal, (yawal+yakhir)/2, (xawal+xakhir)/2+1, xakhir);
    }else if(code[0] == '3'){
        changeMaze(code, (yawal+yakhir)/2+1, yakhir, (xawal+xakhir)/2+1, xakhir);
    }
}

int main(){
    cin>>t;
    string temp;

    while(t--){
        cin>>temp;
        data.push_back(temp);
    }

    cin>>n>>m;

    x = makePowerOfTwo(n);
    y = makePowerOfTwo(m);

    if(x > y) y = x;
    else x = y;

    memset(maze,0,sizeof(maze));

    for(int i=0;i<data.size();i++){
        //data[i].erase(data[i].begin());
        //cout<<data[i]<<endl;
        changeMaze(data[i],0,y-1,0,y-1);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d",maze[i][j]);
            if(j!=m-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
