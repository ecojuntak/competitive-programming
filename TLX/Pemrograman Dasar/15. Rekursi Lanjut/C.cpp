#include <bits/stdc++.h>

using namespace std;

int n,m;

void calculate(int n){
    //cout<<n<<"\n";
    if(n==0){
        return;
    }else{
        calculate(n-1);
        for(int i=0; i<n; i++)
            printf("*");
        printf("\n");
        calculate(n-1);
    }
}

int main(){
    cin>>n>>m;

    calculate(n);

    return 0;
}
