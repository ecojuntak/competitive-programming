#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,k,z;
    int total = 0;
    cin>>n>>k;

    vector< pair< double, pair<double,double> > > data(n);

    for(int i=0;i<n;i++){
        cin>>z;
        data[i].second.second = z;
        total += z;
    }

    for(int i=0;i<n;i++){
        cin>>z;
        data[i].second.first = z;
        data[i].first = data[i].second.first / data[i].second.second;
    }

    sort(data.begin(), data.end());

    //for(int i=0;i<n;i++){
    //    cout<<data[i].first<<" "<<data[i].second.first<<" "<<data[i].second.second<<endl;
    //}
    //cout<<"\n";
    int idx = n-1;
    double price = 0;


        while(k!=0){

            //cout<<data[idx].first<<" "<<data[idx].second.first<<" "<<data[idx].second.second<<endl;
            price += (double)data[idx].first;
            data[idx].second.first -= data[idx].first;
            data[idx].second.second -= 1;
            if(data[idx].second.second == 0){
                data[idx].first = 0;
                sort(data.begin(), data.end());
            }
            else data[idx].first = data[idx].second.first / data[idx].second.second;
            k--;
        }

    printf("%.5lf\n",price);

    return 0;
}
