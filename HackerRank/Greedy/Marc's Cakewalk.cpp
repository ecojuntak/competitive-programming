#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    int n,bil;
    vector<int> data;
    long long sum = 0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>bil;
        data.push_back(bil);
    }

    sort(data.begin(), data.end(), compare);

    for(int i=0;i<n;i++){
        //cout<<(data[i] * int(pow(2,i)))<<endl;
        sum = (sum + (data[i] * (long long)(pow(2,i))));
    }

    cout<<sum<<endl;

    return 0;
}
