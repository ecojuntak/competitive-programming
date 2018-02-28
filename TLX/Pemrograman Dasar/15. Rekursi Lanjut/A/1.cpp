#include <bits/stdc++.h>

using namespace std;

void batang(int n){
    if(n == 0){
        printf("daun\n");
    }else{
        batang(n-1);
        batang(n-1);
    }
}

int main(){

    batang(3);

    return 0;
}
