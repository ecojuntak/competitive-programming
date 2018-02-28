#include <bits/stdc++.h>

using namespace std;

typedef long long int lld;
typedef vector<int> vi;
typedef pair <int , int> pii;
typedef vector<pii> vii;
typedef vector < pair < pair < int , int > , int > > viii;

int main(){
    int t,x,y,z,m,n;

    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>n>>m;
        viii data;
        vii temp;
        for(int j=0;j<n;j++){
            cin>>x>>y>>z;
            data.push_back(make_pair(make_pair(x,y),z));
        }

        sort(data.begin(), data.end());

        for(int j=1;j<n;j++){
            int atas = data[i-1].first.second;
            int bawah = data[i].first.first;
            if(atas > bawah){

            }
        }
    }

    return 0;
}
