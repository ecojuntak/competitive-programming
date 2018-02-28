#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int> data){
    for(int i=1;i<data.size();i++){
        if(data[i-1] > data[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int t,n;

    cin>>t;

    while(t--){
        cin>>n;
        vector<int> data(n);

        for(int i=0;i<n;i++){
            cin>>data[i];
        }

        for(int i=1;i<n;i++){
            if(data[i-1] > data[i] && data[i-1]-data[i] == 1){
                int temp = data[i];
                data[i] = data[i-1];
                data[i-1] = temp;
            }
        }

        if(isSorted(data)){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
    }

    return 0;
}
