#include <bits/stdc++.h>

using namespace std;

int a,b,k,x;

int calculate(int x){
    if(k>1){
        k--;
        return calculate(calculate(x));
    }else return (abs)((a*x)+b);
}

int main(){
    cin>>a>>b>>k>>x;

    cout<<calculate(x)<<endl;

    return 0;
}
