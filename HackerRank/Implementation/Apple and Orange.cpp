#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,t,a,b,m,n,bil;
    int ap = 0;
    int ore = 0;

    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    while(m--){
        cin>>bil;
//        bil = (abs)(bil);
        if(a+bil >= s && a+bil <= t) ap++;
    }

    while(n--){
        cin>>bil;
//        bil = (abs)(bil);
        if(b+bil <= t && b+bil >= s) ore++;
    }

    cout<<ap<<endl;
    cout<<ore<<endl;

    return 0;
}
