#include <bits/stdc++.h>

using namespace std;

int calculate(int a, int b){
    if(a>b) return 1 + calculate(a-1,b);
    else if(a<b) return 1 + calculate(a,b-1);
    else return a+b;
}

int main(){
    int a,b;

    cin>>a>>b;

    cout<<calculate(a,b)<<endl;

    return 0;
}
