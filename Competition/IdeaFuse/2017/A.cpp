#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long int ll;

vi data;
vi temp;
int n,m,x;

int countSubset(vi data){
    int res=0;
    int total;

    for(int i=0; i<n ;i++){
        for(int x : temp ){
            total += x;
        }
    }

    return res;
}

int main(){
    cin>>n>>m;


    for(int i=0; i<n ;i++){
        cin>>x;
        data.push_back(x);
    }

    cout<<countSubset(data)<<endl;

    return 0;
}
