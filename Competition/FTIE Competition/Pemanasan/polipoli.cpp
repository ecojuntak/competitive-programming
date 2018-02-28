#include <bits/stdc++.h>

using namespace std;


int main() {
    char kata[101];

    gets(kata);

    string temp = "";

    for(int i=0; i<strlen(kata); i++){
        if(kata[i]!=' '){
            temp += kata[i];
            cout<<kata[i];
        }
        else if(kata[i] == ' '){
            for(int j=temp.length()-1; j>=0; j--){
                cout<<temp[j];
            }
            temp = "";
            cout<<" ";
        }
    }

    for(int j=temp.length()-1; j>=0; j--){
        cout<<temp[j];
    }

    cout<<"\n";
    return 0;
}
