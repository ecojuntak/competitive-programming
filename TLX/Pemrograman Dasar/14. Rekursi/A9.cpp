#include <bits/stdc++.h>

using namespace std;

long long int calculate(long long int a){
    if(a==0) return 0;
    else return calculate(a/100) + calculate(a%100);
}

int main(){
    long long int a;

    cin>>a;

    cout<<calculate(a)<<endl;


    return 0;
}
