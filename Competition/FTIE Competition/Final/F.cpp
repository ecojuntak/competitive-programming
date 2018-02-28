#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

map<int,string> data;

int main(){
    int t,bil;
    string temp = "";

    data[1] = "satu";
    data[2] = "dua";
    data[3] = "tiga";
    data[4] = "empat";
    data[5] = "lima";
    data[6] = "enam";
    data[7] = "tujuh";
    data[8] = "delapan";
    data[9] = "sembilan";
    data[11] = "sebelas";
    data[12] = "dua-belas";
    data[13] = "tiga-belas";
    data[14] = "empat-belas";
    data[15] = "lima-belas";
    data[16] = "enam-belas";
    data[17] = "tujuh-belas";
    data[18] = "delapan-belas";
    data[19] = "sembilan-belas";

    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>bil;

        while(bil!=0){
            if(bil == 1000){
                temp += "seribu";
                bil %= 1000;
            }else if(bil >= 100){
                if((bil / 100) == 1){
                    temp += "seratus";
                }else{
                    temp += data[bil / 100];
                    temp += "-ratus";
                }
                bil %= 100;
            }else if(bil >= 10){
                if(bil > 10 && bil < 20){
                    temp += data[bil];
                    bil = 0;
                }else{
                    if((bil / 10) == 1){
                        temp += "sepuluh";
                    }else{
                        temp += data[bil / 10];
                        temp += "-puluh";
                    }
                    bil %= 10;
                }
            }else if(bil >= 1){
                temp += data[bil / 1];
                bil %= 1;
            }
            temp += "-";
        }
        temp.erase(temp.end()-1,temp.end());
        cout << "Case #" << i <<" = "<< temp << endl;
        temp = "";
    }
    return 0;
}
