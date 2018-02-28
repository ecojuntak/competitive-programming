#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
typedef unsigned long long int ll;

int stringToInt(string s){
    char a[100];
    int res;
    strcpy(a, s.c_str());
    sscanf(a,"%d", &res);
    return res;
}

bool calculate(string s){
    for(int i=1; i<s.length()-1; i++){
        if(s[i-1] == '0' && s[i] == '0') return true;
        else if(s[i-1] == '5' && s[i] == '0') return true;
    }

    return false;
}

int main(){
    int n;
    string bil;
    string last = "";

    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>bil;
        printf("Case #%d: ",i);
        if(calculate(bil)){
            //for(int j=bil.length()-4; j<bil.length(); j++){
            //    last += bil[j];
            //}
            //int la = stringToInt(last);
            //cout<<last;
            //if(la%50 != 0)
            printf("YA\n");
            //else printf("TIDAK\n");
        }
        else printf("TIDAK\n");
    }

    return 0;
}
