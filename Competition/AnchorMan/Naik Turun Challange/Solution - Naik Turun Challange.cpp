#include <bits/stdc++.h>

using namespace std;

map<int,string> data;

int main(){
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

    int t;
    string temp;

    cin>>t;

    for(int i=1; i<=t; i++){
        cin>>temp;
        int coAwal = 0, coAkhir = 0;

        if(temp[0] == 'T'){
            for(int j=0; j<temp.length(); j++){
                if(j%2 == 0 && temp[j] != 'T') coAwal++;
                else if(j%2 == 1 && temp[j] != 'N') coAwal++;
            }

            for(int j=0; j<temp.length(); j++){
                if(j%2 == 0 && temp[j] != 'N') coAkhir++;
                else if(j%2 == 1 && temp[j] != 'T') coAkhir++;
            }
        }

        if(temp[0] == 'N'){
            for(int j=0; j<temp.length(); j++){
                if(j%2 == 0 && temp[j] != 'N') coAwal++;
                else if(j%2 == 1 && temp[j] != 'T') coAwal++;
            }

            for(int j=0; j<temp.length(); j++){
                if(j%2 == 0 && temp[j] != 'T') coAkhir++;
                else if(j%2 == 1 && temp[j] != 'N') coAkhir++;
            }
        }

        cout<<"Testcase "<<data[i]<<": "<<min(coAwal, coAkhir)<<endl;
    }

    return 0;
}
