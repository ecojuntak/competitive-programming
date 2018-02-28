#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    vector<int> data;
    cin>>t;

    while(t--){
        cin>>n;

        if(n<38){
            cout<<n<<endl;
        }else{
            int jarak = n % 5;
            jarak = 5 - jarak;
            if(jarak <= 2){
                n+=jarak;
                cout<<n<<endl;
            }else{
                cout<<n<<endl;
            }
        }
    }

    return 0;
}
