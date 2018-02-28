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
    bool get = false;

    for(int i=0;i<n;i++){
        cin>>bil;
        data.push_back(bil);
    }

    sort(data.begin(), data.end(), compare);

    int a,b,c;

    for(int i=0;i<n-2;i++){
        a = data[i];
        b = data[i+1];
        c = data[i+2];

        if(a < b+c){
            get = true;
            break;
        }
    }

    if(get == false) printf("-1\n");
    else printf("%d %d %d\n",c,b,a);

    return 0;
}
