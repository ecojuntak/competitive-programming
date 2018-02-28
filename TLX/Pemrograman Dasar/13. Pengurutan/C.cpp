#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<int> data;
    int x;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;
        data.push_back(x);
    }

    sort(data.begin(), data.end());

    double med;

    if(n%2 == 1){
        med = (double)data[n/2];
    }else{
        med = (double)(data[n/2]+data[n/2-1])/2;
    }

    printf("%.1lf\n",med);

    return 0;
}
