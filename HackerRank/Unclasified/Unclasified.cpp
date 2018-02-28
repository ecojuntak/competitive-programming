#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, a,b,c;

    cin>>q;

    while(q--){
        cin>>a>>b>>c;

        if((abs)(a-c) < (abs)(b-c)){
            cout<<"Cat A"<<endl;
        }else if((abs)(a-c) > (abs)(b-c)){
            cout<<"Cat B"<<endl;
        }else cout<<"Mouse C"<<endl;
    }

    return 0;
}
