#include <bits/stdc++.h>

using namespace std;

int n = 5;
int a[5] = {1,3,5,8,11};

bool wow(int i, int t){
    if(i>n){
        if(t == 0){
            return true;
        }else{
            return false;
        }
    }else{
        return wow(i+1, t-a[i]) || wow(i+1,t);
    }
}

int main(){

    cout<<wow(1,2)<<endl;
    cout<<wow(1,6)<<endl;
    cout<<wow(1,9)<<endl;

    return 0;
}
