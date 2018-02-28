#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;


int main(){
    int n,x;
    ll res = 0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        res += x;
    }

    cout<<res+n<<endl;

    return 0;
}
