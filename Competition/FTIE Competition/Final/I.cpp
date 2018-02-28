#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

int main(){
    int n,x;
    vector<int> data;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;

        if(x%2 == 1 ){
            double a = double(x/2)+ 1;
            printf("%.1lf\n",a);
        }else{
            double a = double(x/2)+ 0.5;
            printf("%.1lf\n",a);
        }
    }

    return 0;
}
