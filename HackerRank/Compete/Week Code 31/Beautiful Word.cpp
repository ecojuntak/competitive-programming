#include <bits/stdc++.h>

using namespace std;

int main(){
    string w;
    cin >> w;

    bool vo = false;
    bool con = false;
    bool sama = false;
    char lat, cur;
    string vowel = "aeiuoy";

    for(int i=1;i<w.length();i++){
        lat = w[i];
        cur = w[i-1];

        if(lat == 'a' || lat == 'e' || lat == 'i' || lat == 'o' || lat == 'y' || lat == 'u')
            vo = true;
        else
            vo = false;

        if(vo){
            for(int j=0; j<vowel.length(); j++){
                if(vowel[j] == cur){
                        printf("No\n");
                    con = true;
                    sama = true;
                    break;
                }
                if(con) break;
            }
            if(con) break;
        }
        if(con) break;

        if(w[i-1] == w[i]){
            printf("No\n");
            sama = true;
            break;
        }

        if(sama) break;
    }

    if(!sama)
        cout<<"Yes\n";

    return 0;
}
