#include <bits/stdc++.h>

using namespace std;

typedef long long int lld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef vector< pair < string, pair <int, int> > > sii;

int main(){
    int t,m,n,x,y,a,b,c,d;
    string nama;
    cin>>t;

    for(int i=1;i<=t;i++){
        sii data;
        vii source;
        vii des;
        cin>>n>>m;

        for(int j=0;j<n;j++){
            cin>>nama>>x>>y;
            data.push_back(make_pair(nama, make_pair(x,y)));
        }


        sort(data.begin(), data.end());


        printf("Case #%d:\n",i);

        for(int j=0; j<m ;j++){

            cin>>a>>b>>c>>d;
            source.push_back(make_pair(a,b));
            des.push_back(make_pair(c,d));

            int min = INT_MAX;
            int selected;

            for(int k=0;k<data.size();k++){
                int jarak = (abs)(data[k].second.first - source[0].first) + (abs) (data[k].second.second - source[0].second);
                if(jarak < min){
                    min = jarak;
                    selected = k;
                }
            }

            cout<<data[selected].first<<endl;
            data[selected].second.first = des[0].first;
            data[selected].second.second = des[0].second;

            source.clear();
            des.clear();
        }
    }
    return 0;
}
