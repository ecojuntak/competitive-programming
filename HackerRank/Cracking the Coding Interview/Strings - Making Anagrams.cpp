#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b;

    cin>>a>>b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int sum = 0;

    if(a.length() < b.length()){
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[i]){
                sum += (b.length()-i) + (a.length()-i);
                break;
            }
        }
    }

    cout<<sum<<endl;

    return 0;
}
