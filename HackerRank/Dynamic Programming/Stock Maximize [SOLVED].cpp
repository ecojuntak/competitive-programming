#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;

vector<lld> data;

lld calculate(int be, int en){
    lld maks = -1;
    int maxIDX;

    for(int i=be; i<=en ;i++){
        if(data[i] > maks){
            maks=data[i];
            maxIDX = i;
        }
    }

    lld sum = 0;

    for(int i=be;i<maxIDX;i++){
        sum += data[i];
    }

    lld profit = ((maxIDX-be) * maks) - sum;

    //cout<<"maks = "<<maks<<"  and sum = "<<sum<<"  and profit = "<<profit<<endl;

    if(en - maxIDX > 0)
        profit += calculate(maxIDX+1,en);

    return profit;
}

int main(){
    int n,m;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>m;
        lld temp;
        data.clear();

        for(int j=0;j<m;j++){
            cin>>temp;
            data.push_back(temp);
        }

        cout<<calculate(0,data.size()-1)<<endl;
    }

    return 0;
}
