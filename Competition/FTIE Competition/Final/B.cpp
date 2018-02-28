#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

int main(){
    int i, t, n;

    cin >> t;
    for(i = 0; i < t; i++){
        cin >> n;
        if(n < 0){
            cout <<"Case #" << i+1 << " = 1" << endl;
        }else if(n == 0){
             cout <<"Case #" << i+1 << " = 1" << endl;
        }else if(n % 2 == 0){
            if((n / 2) % 2 != 0){
                cout <<"Case #" << i+1 << " = 4" << endl;
            }else{
                cout <<"Case #" << i+1 << " = 6" << endl;
            }
        }else{
            if((n / 2) % 2 == 0){
                cout <<"Case #" << i+1 << " = 2" << endl;
            }else{
                cout <<"Case #" << i+1 << " = 8" << endl;
            }
        }
    }

    return 0;
}
