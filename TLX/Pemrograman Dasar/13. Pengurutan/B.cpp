#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<string> data;
    string nama;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>nama;
        data.push_back(nama);
        sort(data.begin(), data.end());

        cout<< lower_bound(data.begin(), data.end(), nama) - data.begin() + 1 <<endl;
    }


    return 0;
}
