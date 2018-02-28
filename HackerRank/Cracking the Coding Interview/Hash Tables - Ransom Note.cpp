#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> satu, dua;
    string s;
    int n,m;

    cin>>n>>m;

    while(n--){
        cin>>s;
        satu[s]++;
    }

    while(m--){
        cin>>s;
        if(satu[s] == 0){
            printf("No\n");
            break;
        }else{
            cout<<satu[s]<<endl;
        }
    }

    if(m==-1){
        printf("Yes\n");
    }

    return 0;
}
