#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;

    cin>>n>>x;

    vector<int> data(n+1);

    for(int i=0; i<n; i++) cin>>data[i];

    int temp = INT_MAX;
    int k, res=0;

    for(int i=0; i<n; i++){
        k = x - data[i];

        if((abs)(k) < temp){
            res = i;
            temp = (abs)(k);
        }else if(x == data[i]){
            res = i;
        }else if((abs)(k) == temp){
            if(data[i] < data[res]){
                res = i;
            }
        }
    }

    cout<<data[res]<<endl;

    return 0;
}
