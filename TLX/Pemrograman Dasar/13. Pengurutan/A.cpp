#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector< pair<int,string> > data;
    string nama;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>nama;
        data.push_back(make_pair(nama.length(),nama));
    }

    sort(data.begin(), data.end());

    for(int i=0; i<n; i++){
        cout<<data[i].second<<endl;
    }

    return 0;
}
