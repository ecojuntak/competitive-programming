#include <bits/stdc++.h>

using namespace std;

int n,m,x,y;
int maze[130][130];
vector<string> result;

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

int patok, dep=-1;

void printDep(){
    for(int i=0;i<dep;i++){
        printf("\t");
    }
}

bool heterogen(int yawal, int yakhir, int xawal, int xakhir){
    patok = maze[xawal][yawal];
    for(int i=xawal; i<=xakhir; i++){
        for(int j=yawal; j<=yakhir; j++){
            if(i==xawal && j==yawal) continue;
            if(maze[i][j] != patok){
                //if(patok == 1){
                //    printDep();
                //printf("%d,%d - %d,%d  \n",xawal,xakhir,yawal,yakhir);
                //}
               // printf("patok %d - current %d\n",patok,maze[i][j]);
                //printf("heterogen\n");
                return true;
            }
        }
    }
    return false;
}

void gas(string base, string tail, int yawal, int yakhir, int xawal, int xakhir){
    //dep++;
    //printDep();
    //printf("%d,%d - %d,%d  \n",xawal,xakhir,yawal,yakhir);
    //cout<<base+tail<<endl;
    if(xawal == xakhir || yawal == yakhir){
        if(maze[xawal][yakhir] == 1){
            //cout<<"heterogen 1"<<endl;
            string hasil = "1"+base+tail;
            //printDep();
            result.push_back(hasil);
            //printf("%d,%d - %d,%d  \n",xawal,xakhir,yawal,yakhir);
            //cout<<hasil<<endl;
        }
        return;
    }

    if(heterogen(yawal,yakhir,xawal,xakhir)){
        //cout<<"heterogen\n";
        string temp = base+tail;
        gas(temp,"0", yawal, (yawal+yakhir)/2, xawal, (xawal+xakhir)/2);
        gas(temp,"1",(yawal+yakhir)/2+1, yakhir, xawal, (xawal+xakhir)/2);
        gas(temp,"2",yawal, (yawal+yakhir)/2, (xawal+xakhir)/2+1, xakhir);
        gas(temp,"3",(yawal+yakhir)/2+1, yakhir, (xawal+xakhir)/2+1, xakhir);
    }else{
        //printf("%d,%d - %d,%d\n",xawal,xakhir,yawal,yakhir);
        if(patok == 1){
            //cout<<"heterogen 1111"<<endl;
            string hasil = "1"+base+tail;
            result.push_back(hasil);
            //cout<<hasil<<endl;
        }
    }
    dep--;
}

int main(){
    memset(maze, 0, sizeof(maze));
    cin>>n>>m;
    x = makePowerOfTwo(n);
    y = makePowerOfTwo(m);

    if(x > y) y = x;
    else x = y;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&maze[i][j]);

    //for(int i=0;i<y;i++){
    //    for(int j=0;j<y;j++){
    //        printf("%d ",maze[i][j]);
    //    }
    //    printf("\n");
    //}

    gas("","",0,y-1,0,y-1);

    cout<<result.size()<<endl;

    for(int i=0;i<result.size();i++)
        cout<<result[i]<<endl;

    return 0;
}
