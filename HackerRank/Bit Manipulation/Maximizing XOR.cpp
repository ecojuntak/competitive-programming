#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;

    cin>>n>>m;
    int maks = -1;
    for(int i=n; i<=m; i++){
        for(int j=n; j<=m; j++){
            if(maks < (i^j)) maks = (i^j);
        }
    }

    cout<<maks<<endl;

    return 0;
}
