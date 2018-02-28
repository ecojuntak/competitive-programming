#include <bits/stdc++.h>

using namespace std;

vector<int> data;

int binser(int be, int en, int bil){
    cout<<be<<"  "<<en<<endl;
    if(be > en) return 0;
    if(data[be] == bil) return be;
    else if(data[en] == bil) return en;

    int mid = be+en/2;
    if(bil < data[mid]){
        binser(be, mid-1, bil);
    }else{
        binser(mid+1, en, bil);
    }
}

int main(){
    int t;
    int n,m,bil;

    cin>>t;

    while(t--){
        cin>>m>>n;
        data.clear();
        for(int i=0; i<n; i++){
            cin>>bil;
            data.push_back(bil);
        }

        for(int i=0; i<n; i++){
            int temp = m - data[i];
            //cout<<temp<<endl;
            if(temp <= 0) continue;
            int a = binser(i+1,n-1,temp);
            //cout<<a<<endl;
            if(a){
                cout<<i+1<<" "<<a+1<<endl;
                break;
            }
        }
    }


    return 0;
}
