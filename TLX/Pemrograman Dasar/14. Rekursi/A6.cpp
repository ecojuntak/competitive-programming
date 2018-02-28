#include <bits/stdc++.h>

using namespace std;

void calculate(string a, int b){
    if(b == a.length()){
        cout<<a[b];
    }else{
        cout<<a[b];
        calculate(a,b+1);
        cout<<a[b];
    }
}

int main(){
    int b;
    string a;
    cin>>a>>b;

    calculate(a,b);

    return 0;
}
