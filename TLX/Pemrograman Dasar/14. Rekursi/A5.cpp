#include <bits/stdc++.h>

using namespace std;

int calculate(int a, int b, int c){
    if(b==0) return c;
    else return calculate(a,b-1,c*a);
}

int main(){
    int a,b,c;

    cin>>a>>b>>c;

    cout<<calculate(a,b,c)<<endl;

    return 0;
}

