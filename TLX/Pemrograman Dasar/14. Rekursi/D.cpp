#include <bits/stdc++.h>

using namespace std;

string s;

bool calculate(int be, int en){
    if(be>en) return true;
    if(be == en && s[be]==s[en]) return true;
    if(s[be] == s[en]){
        return calculate(be+1, en-1);
    }else{
        return false;
    }
}

int main(){
    cin>>s;

    if(calculate(0,s.length()-1))
        cout<<"YA\n";
    else cout<<"BUKAN\n";

    return 0;
}
