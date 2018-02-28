#include <bits/stdc++.h>

using namespace std;

char maze[111][111];

int main(){
    int n,derajat;
    int maxLength = 0;
    string temp;
    vector<string> data;

    cin>>n;

    int m = n;

    while(n--){
        cin>>temp;
        if(temp.size() > maxLength)  maxLength = temp.size();
        data.push_back(temp);
    }

    cin>>derajat;

    if(derajat >= 360){
        derajat = derajat % 360;
    }

    memset(maze,'-',sizeof(maze));

    for(int i=0; i<m; i++){
        temp = data[i];
        for(int j=0; j<temp.size(); j++){
            maze[i][j] = temp[j];
        }
    }

    if(derajat == 90){
        int x = m-1, y = 0;
        for(int i=0;i<maxLength; i++){
            x = m-1;
            for(int j=0;j<m;j++){
                cout<<maze[x][y];
                x--;
            }
            y++;
            cout<<"\n";
        }
    }else if (derajat == 180){
        int x = m-1, y = maxLength-1;
        for(int i=0;i<m; i++){
            y = maxLength-1;
            for(int j=0;j<maxLength;j++){
                cout<<maze[x][y];
//                cout<<x<<","<<y<<"  ";
                y--;
            }
            x--;
            cout<<"\n";
        }
    }else if(derajat == 270){
        int x = 0, y = maxLength-1;
        for(int i=0;i<maxLength; i++){
            x = 0;
            for(int j=0;j<m;j++){
                cout<<maze[x][y];
//                cout<<x<<","<<y<<"  ";
                x++;
            }
            y--;
            cout<<"\n";
        }
    }else if(derajat == 0){
        for(int i=0; i<m; i++){
            for(int j=0; j<maxLength; j++){
                cout<<maze[i][j];
        }
        printf("\n");
    }
}

    return 0;
}
