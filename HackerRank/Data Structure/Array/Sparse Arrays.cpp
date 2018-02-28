#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    string kata;
    map<string,int> data;

    cin>>n;

    while(n--){
        cin>>kata;
        data[kata]++;
    }

    cin>>m;

    while(m--){
        cin>>kata;
        cout<<data[kata]<<endl;
    }

    return 0;
}
