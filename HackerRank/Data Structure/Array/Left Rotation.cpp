#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;

    cin>>n>>m;

    list<int> data;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        data.push_back(x);
    }

    int time = m%n;

    for(int i=1;i<=time;i++){
        x = data.front();
        data.pop_front();
        data.push_back(x);
    }

    while(!data.empty()){
        cout<<data.front();
        if(data.size()!=1) cout<<" ";
        data.pop_front();
    }

    cout<<"\n";

    return 0;
}
