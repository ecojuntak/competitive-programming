#include <bits/stdc++.h>

using namespace std;

int ping(int a);
int pong(int b);

int main(){
    int a;

    cin>>a;

    cout<<ping(a)<<endl;

    return 0;
}

int pong(int a){
    if(a==0) return 0;
    else return 2 + ping(a-1);
}

int ping(int a){
    if(a==0) return 0;
    else return 1 + pong(a-1);
}


