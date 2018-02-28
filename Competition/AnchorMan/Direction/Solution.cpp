#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,k;
    string direction;

    cin>>x>>y>>direction>>k;

    int i=0;

    while(k--){
        if(direction[i] == '<') x--;
        else if(direction[i] == '>') x++;
        else if(direction[i] == '^') y++;
        else if(direction[i] == 'V') y--;
        i++;
    }

    cout<<x<<","<<y<<endl;

    return 0;
}
