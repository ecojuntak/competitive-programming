#include<bits/stdc++.h>
using namespace std;

map<int, string> data;

int main(){
    int i, j, t, tot = 0;
    string pola;

    data[1] = "satu";
    data[2] = "dua";
    data[3] = "tiga";
    data[4] = "empat";
    data[5] = "lima";
    data[6] = "enam";
    data[7] = "tujuh";
    data[8] = "delapan";
    data[9] = "sembilan";
    data[10] = "sepuluh";
    data[11] = "sebelas";
    data[12] = "dua-belas";
    data[13] = "tiga-belas";
    data[14] = "empat-belas";
    data[15] = "lima-belas";
    data[16] = "enam-belas";
    data[17] = "tujuh-belas";
    data[18] = "delapan-belas";
    data[19] = "sembilan-belas";
    data[20] = "dua-puluh";

    cin >> t;
    for(i = 0; i < t; i++){
        cin >> pola;
        if(pola.length() == 1){
            cout << "Testcase " << data[i+1] << ": " << tot << endl;
        }else{
            for(j = 0; j < pola.length(); j++){
                if(j == pola.length() - 1){
                    if(pola[j] == 'N'){
                        if(pola[j-1] == 'T'){
                            continue;
                        }else{
                            tot++;
                        }
                    }else if(pola[j] == 'T'){
                        if(pola[j-1] == 'N'){
                            continue;
                        }else{
                            tot++;
                        }
                    }
                }else{
                    if(pola[j] == 'N'){
                        if(pola[j+1] == 'T'){
                            continue;
                        }else{
                            pola[j+1] = 'T';
                            tot++;
                        }
                    }else if(pola[j] == 'T'){
                        if(pola[j+1] == 'N'){
                            continue;
                        }else{
                            pola[j+1] = 'N';
                            tot++;
                        }
                    }
                }
            }
            cout << "Testcase " << data[i+1] << ": " << tot << endl;
            tot = 0;
        }
    }

    return 0;
}
