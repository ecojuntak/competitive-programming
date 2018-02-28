#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long int ll;

int main(){
    int n,m,z;
    vi data;

    cin>>n>>m;

    for(int i=0; i<n; i++){
        cin>>z;
        data.push_back(z);
    }

    int temp = 0;

    for(int i=0; i<n; i++){
        temp += data[i];
    }

    return 0;
}
