#include <bits/stdc++.h>

using namespace std;

void calculate(long long int n){
    if(n==0) return;
    calculate(n/2);
    cout<<n%2;
}

int main(){
    long long s;
    cin>>s;

    calculate(s);

    printf("\n");
    return 0;
}
