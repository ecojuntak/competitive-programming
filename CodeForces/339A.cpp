#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    vector<int> data;

    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '1') data.push_back(1);
        else if(s[i] == '2') data.push_back(2);
        else if(s[i] == '3') data.push_back(3);
    }

    sort(data.begin(), data.end());

    for(int i=0; i<data.size(); i++){
        cout<<data[i];
        if(i!= data.size() - 1) printf("+");
    }

    cout<<"\n";

    return 0;
}
