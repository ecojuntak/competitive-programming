#include <bits/stdc++.h>

using namespace std;

typedef long long int lld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;

int main(){
    int t,x;

    cin>>t;

    for(int i=1;i<=t;i++){
        vi satu;
        bool ada = false;
        int R;

        for(int j=0;j<4;j++){
            cin>>x;
            satu.push_back(x);
        }

        cin>>R;

        printf("Case #%d: ",i);

        for(int j=0;j<4;j++){
            if(satu[j] > R){
                    ada = true;
                break;
            }
        }

        if(ada) printf("new record!\n");
        else printf("no new record\n");
    }

    return 0;
}
