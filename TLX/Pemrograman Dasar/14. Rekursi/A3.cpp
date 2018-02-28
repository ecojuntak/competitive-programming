#include <bits/stdc++.h>

using namespace std;

int calculate(int a, int b){
    if(b==0) return 1;
    else if(b%2 == 1) return a*calculate(a,b-1);
    else{
        int temp = calculate(a,b/2);
        return temp*temp;
    }
}

int main(){
    int a,b;

    cin>>a>>b;

    cout<<calculate(a,b)<<endl;


    return 0;
}
