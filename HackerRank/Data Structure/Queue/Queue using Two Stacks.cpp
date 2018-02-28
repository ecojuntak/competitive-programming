#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, menu, k;

    cin>>q;

    queue<long int> data;

    while(q--){
        cin>>menu;

        if(menu == 1){
            cin>>k;
            data.push(k);
        }else if(menu == 2){
            data.pop();
        }else if(menu == 3){
            cout<<data.front()<<endl;
        }
    }

    return 0;
}
