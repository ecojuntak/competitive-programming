#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

vi data;

void generateData(){
    for(int i=1;i<=1000000;i++){
        if(i%3 == 0 || i%5 == 0 ){
            data.push_back(i);
        }
    }
}


int main(){
    generateData();
    int t;
    int n;
    cin>>t;

    while(t--){
        cin>>n;
        ll total = 0;
        int i = 0;
        while(data[i] < n){
            total += data[i];
            i++;
        }
        cout<<total<<endl;
    }
    return 0;
}
