#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

ll t,n,m;
#define batas 1e12
vector<ll> data;

void generateData(){
    ll temp,i=1;

    while((ll)pow(i,3) <= batas ){
        temp = (ll)pow(i,3);
        data.push_back(temp);
        i++;
    }
}

int main(){
    generateData();
    //cout<<data.size()<<endl;
    cin>>t;

    for(ll i=1;i<=t;i++){
        cin>>n>>m;
        ll co = 0,j=0;
        while(data[j] <= m){
            if(data[j] >= n) co++;
            j++;
        }
        printf("Case #%llu: %llu\n",i,co);
    }

    return 0;
}
