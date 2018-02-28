#include <bits/stdc++.h>

using namespace std;

int maze[100][100];

int main(){
    int l;
    int x,y,k;

    memset(maze,0,sizeof(maze));

    scanf("%d",&l);

    for(int i=0; i<l; i++){
        for(int j=0; j<l; j++){
            scanf("%d",&maze[i][j]);
        }
    }

//    for(int i=0; i<l; i++){
//        for(int j=0; j<l; j++){
//            cout<<maze[i][j];
//        }
//        cout<<"\n";
//    }

    cin>>x>>y>>k;

    int sum = 0;

    int temp = k;
    int xTemp = x, yTemp = y;

    //cout<<x<<y<<endl;

    //kiri
    while(temp--){
        yTemp--;
        if(yTemp < 0){
            yTemp = l-1;
        }
        sum += maze[xTemp][yTemp];
//        printf("%d,%d\n",xTemp,yTemp);
    }

    temp = k;
    xTemp = x, yTemp = y;

    //kanan
    while(temp != 0){
        temp--; yTemp++;
        if(yTemp == l){
            yTemp = 0;
        }
        sum += maze[xTemp][yTemp];
//        printf("%d,%d\n",xTemp,yTemp);
    }

    temp = k;
    xTemp = x, yTemp = y;

    //atas
    while(temp != 0){
        temp--; xTemp--;
        if(xTemp < 0){
            xTemp = l-1;
        }
        sum += maze[xTemp][yTemp];
//        printf("%d,%d\n",xTemp,yTemp);
    }

    temp = k;
    xTemp = x, yTemp = y;

    //bawah
    while(temp != 0){
        temp--; xTemp++;
        if(xTemp == l){
            xTemp = 0;
        }
        sum += maze[xTemp][yTemp];
//        printf("%d,%d\n",xTemp,yTemp);
    }

    cout<<sum<<endl;

    return 0;
}
