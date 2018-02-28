#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long money,bil;
    vector<long long> data;

    cin>>n>>money;

    for(int i=0;i<n;i++){
        cin>>bil;
        data.push_back(bil);
    }

    sort(data.begin(), data.end());

    int i=0;
    int co = 0;

    while(money >= data[i]){
        money -= data[i];
        co++; i++;
    }

    cout<<co<<endl;

    return 0;
}
