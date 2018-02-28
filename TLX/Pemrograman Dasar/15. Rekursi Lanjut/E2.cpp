#include <bits/stdc++.h>

using namespace std;

int n,m;
int x,y;

int makePowerOfTwo(int bil){
    for(int i=1; i<= 7 ;i++){
        if(int(pow(2,i) >= bil)){
            bil = (int)pow(2,i);
            break;
        }
    }
    return bil;
}

int maze[130][130];

int patok;

bool heterogen(int x, int y){
    patok = maze[x][y];

    for(int i=x; i<=y ;i++){
        for(int j=x; j<=y; j++){
            if(i==x && j==x) continue;
            if(maze[i][j] != maze[x][y]){
                cout<<"heterogen\n"<<endl;
                return true;
            }
        }
    }
    cout<<"homogen\n"<<endl;
    return false;
}

int lang = 0;

void calculate(string temp, string ekor, int x, int y){
    lang++;
    if(lang == 30) exit(0);
    printf("%d,%d\n",x,y);
    cout<<temp+ekor<<endl;
    if(x > y) return;

    temp += ekor;
    if(heterogen(x,y)){
        calculate(temp, "0", x, y/2);
        calculate(temp, "1", y/2, y);
        calculate(temp, "2", y/2,y/2);
        calculate(temp, "3", y/2, y);
    }else{
        //if(patok == 1) cout<<temp+ekor<<endl;
        return;
    }

    //cout<<temp<<endl;
}

int main(){
    cin>>n>>m;

    x = makePowerOfTwo(n);
    y = makePowerOfTwo(m);

    if(y > x) x = y;
    else y = x;

    memset(maze,0,sizeof(maze));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&maze[i][j]);

    for(int i=0;i<y;i++){
        for(int j=0;j<y;j++){
            printf("%d",maze[i][j]);
        }
        printf("\n");
    }
    string temp = "";
    string ekor = "";
    calculate(temp,ekor,0,y-1);

    return 0;
}
