#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;

    while(n--){
        cin>>x;

        bitset<32> bit(x);

        string bitString = bit.to_string();

        string temp = "";

        for(int i=0; i<bitString.length() ;i++){
            if(bitString[i] == '0')
                temp += '1';
            else
                temp += '0';
        }

        bitset<32> bitt(temp);

        //cout<<bit.to_string()<<endl;
        //cout<<bitt.to_string()<<endl;

        cout<<bitt.to_ullong()<<endl;
    }

    return 0;
}
