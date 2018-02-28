#include <bits/stdc++.h>

using namespace std;

void gali(int n){
    printf("%d_",n);
    if(n>1){
        gali(n/4);
        gali(n/2);
    }
    printf("-%d_",n);
}

int main(){

    gali(4);

    return 0;
}
