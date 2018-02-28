#include <bits/stdc++.h>

using namespace std;

vector<int> prime;
bool dp[200002];

void generateData(){
    for(int i=2; i<=200000; i++){
        if(dp[i]){
            prime.push_back(i);
            //cout<<i<<endl;
            for(int j=i; j<=200000; j+=i){
                if(j>200000)  break;
                dp[j] = 0;
            }
        }
    }
}

int main(){
    memset(dp,1,sizeof(dp));
    generateData();
    //cout<<prime.size()<<endl;
    int t,n;

    cin>>t;

    while(t--){
        cin>>n;

        int i=0;

        while(prime[i] <= n){
            cout<<prime[i];
            if(prime[i+1] <= n){
                printf(" ");
            }
            if(prime[i+1] == 0) break;
            i++;
        }
        printf("\n");
    }

    return 0;
}
