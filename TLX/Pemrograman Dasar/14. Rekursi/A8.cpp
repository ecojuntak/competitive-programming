#include <bits/stdc++.h>

using namespace std;

string calculate(string s){
    if(s.length == 0)
        return "";
    else{
        string t = s;
        t.erase(1,1);
        return calculate(t)+s[1];
    }
}

int main(){
    string s;

    cin>>s;

    cout<<calculate(s)<<endl;


    return 0;
}
