#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<long long int> data;
    long long bil, res = LLONG_MAX;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>bil;
        data.push_back(bil);
    }

    sort(data.begin(), data.end());

    for(int i=1; i<n; i++){
        if((abs)(data[i]-data[i-1]) < res)
            res = (abs)(data[i]-data[i-1]);
    }

    cout<<res<<endl;

    return 0;
}
