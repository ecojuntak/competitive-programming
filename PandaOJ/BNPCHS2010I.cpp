#include <bits/stdc++.h>

using namespace std;

map<int,int> data;
int t,n,m;

void countRec(int n){
    data[n]++;
    if(n==m) return;
    if(n<=1) return;
    countRec(n-1); countRec(n-2);
}

int main(){
    cin>>t;

    while(t--){
        cin>>n>>m;
        data.clear();
        countRec(n);
        cout<<data[m]%10000<<endl;
    }

    return 0;
}
