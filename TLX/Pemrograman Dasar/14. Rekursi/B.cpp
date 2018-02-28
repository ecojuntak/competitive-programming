#include <bits/stdc++.h>

using namespace std;

int calculate(int n){
    if(n==0) return 1;
    if(n%2==0){
        return (n/2)*calculate(n-1);
    }else{
        return n*calculate(n-1);
    }

}

int main(){
    int n;

    cin>>n;

    cout<<calculate(n)<<endl;

    return 0;
}
