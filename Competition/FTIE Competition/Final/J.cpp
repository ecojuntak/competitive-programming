#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

vi data;

void generateData(){
    int jarak = 1;
    int temp = 2;
    data.push_back(2);
    for(int i=1;i<=5; i++){
        for(int j=jarak; j<=jarak*jarak ;j+=jarak){
            temp += jarak;
            data.push_back(temp);
        }
        jarak *= 2;
    }
}

int main(){
    generateData();
    int t,n;

    cin>>t;

    while(t--){
        cin>>n;

        for(int i=0;i<n/2+1;i++){
            for(int j=0;j<n;j++){
                if(i==(i-n/2)){
                    cout<<data[i];
                }
            }
            cout<<"\n";
        }
    }

    return 0;
}
