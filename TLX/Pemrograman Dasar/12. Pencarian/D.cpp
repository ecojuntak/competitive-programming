#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    int x,y;

    cin>>n;

    vector<int> data(n);

    for(int i=0; i<n; i++) cin>>data[i];

    cin>>m;

    while(m--){
        vector<int>::iterator a,b;
        cin>>x>>y;
        int bawah = upper_bound(data.begin(), data.end(), x) - data.begin();
        //a = upper_bound(data.begin(), data.end(), x);
        int atas = upper_bound(data.begin(), data.end(), y) - data.begin();
        //b = upper_bound(data.begin(), data.end(), y);

        //cout<<"atas "<<a-data.begin()<<"  bawah  "<<b-data.begin()<<endl;
        cout<<atas-bawah<<endl;
    }

    return 0;
}
