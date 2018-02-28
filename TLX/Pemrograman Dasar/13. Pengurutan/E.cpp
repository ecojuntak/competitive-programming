#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,k;

    vector<int> data;

    cin>>n>>k;

    while(n--){
        cin>>x;
        data.push_back(x);
    }

    sort(data.begin(), data.end());

    cout<<data[k-1]<<endl;

    return 0;
}
