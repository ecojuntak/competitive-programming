#include <bits/stc++.h>

using namespace std;

int main(){
    int n,op,bil;

    cin>>n;
    stack<int> data;
    int maks = -1;
    while(n--){
        cin>>op;
        if(op == 1){
            cin>>bil;
            if(maks < bil) maks = bil;
            data.push(bil);
        } else if(op == 2){
            data.pop();
        }
    }

    return 0;
}
