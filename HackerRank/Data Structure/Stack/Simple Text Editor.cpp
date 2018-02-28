#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, menu, k;

    cin>>q;

    stack<string> data;
    data.push("");
    string text;

    while(q--){
        cin>>menu;
        if(menu == 1){
            cin>>text;
            string top = data.top();
            top += text;
            data.push(top);
        }else if(menu == 2){
            cin>>k;
            string top = data.top();
            top.erase(top.length()-k, k);
            data.push(top);
        }else if(menu == 3){
            cin>>k;
            string top = data.top();
            cout<<top[k-1]<<endl;
        }else if(menu == 4){
            data.pop();
        }
    }

    return 0;
}
