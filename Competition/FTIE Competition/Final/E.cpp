#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef long long int ll;

string bil;

int stringToInt(string s){
    char a[100];
    int res;
    strcpy(a, s.c_str());
    sscanf(a,"%d", &res);
    return res;
}

void calculate(){
    int data[10002];

    for(int i=0; i<bil.length(); i++){
        string temp = "";
        temp += bil[i];
        data[i] = stringToInt(temp);
    }

    for(int i=0; i<bil.length(); i++){
        int total = 0;
        if(data[i]%2 == 1){
            for(int j = i+1 ;j<bil.length(); j++){
                if(data[j]%2 == 0) total++;
            }
        }else{
            for(int j = i ;j<bil.length(); j++){
                if(data[j]%2 == 0) total++;
            }
        }
        cout<<total;
        if(i!=bil.length()-1) printf(" ");
    }
}

int main(){
    cin>>bil;

    calculate();
    printf("\n");
    return 0;
}
