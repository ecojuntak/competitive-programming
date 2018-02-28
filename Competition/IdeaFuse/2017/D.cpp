#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long int ll;

vi data;

int dp[1001][1001];

bool turn = true;

int maxValue(int a, int b){
    if(a>b) return 0;
    if(a==b) return data[a];
    return max(maxValue(a+1,b) + data[a],
           max(maxValue(a+2,b) + data[a] + data[a+1],
           max(maxValue(a,b-1) + data[b],
               maxValue(a,b-2) + data[b] + data[b-1])));
}


int main(){
    int n,x;

    cin>>n;

    while(n--){
        cin>>x;
        data.push_back(x);
    }

    cout<<maxValue(0, data.size()-1)<<endl;
    return 0;
}
