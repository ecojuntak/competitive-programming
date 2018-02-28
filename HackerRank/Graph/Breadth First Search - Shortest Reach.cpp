#include <bits/stdc++.h>

using namespace std;

int main(){
    int q,m,n,x,u,v;

    cin>>q;

    while(q--){
        cin>>m>>n;

        vector< vector<int> > peta(m+1);

        for(int i=0;i<n;i++){
            cin>>u>>v;
            peta[u].push_back(v);
            peta[v].push_back(u);
        }

        cin>>x;

        queue<int> q;
        int dp[m+1] = {0};
        int langkah = 0;
        q.push(x);
        dp[x] = 0;

        while(!q.empty()){
            int s = q.front();
            q.pop();
            //cout<<"yang di proses "<<s<<" dengan langkah "<<dp[s]<<endl;

            for(int i=0;i<peta[s].size();i++){
                if(dp[peta[s][i]] !=0) continue;
                dp[peta[s][i]] = dp[s]+1;
                //cout<<"\t acc "<<peta[s][i]<<" langkah "<<dp[peta[s][i]]<<endl;
                q.push(peta[s][i]);
            }
        }

        for(int i=1; i<=m ;i++){
            if(i==x) continue;
            else if(dp[i] != 0) cout<<dp[i]*6;
            else cout<<"-1";

            if(i!=m) printf(" ");
        }

        printf("\n");
    }

    return 0;
}
