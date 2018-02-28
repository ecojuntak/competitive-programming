#include <bits/stdc++.h>

using namespace std;

int t,n;

int main(){
    cin>>t;
    string temp;

    for(int i=1; i<=t; i++){
        stack<string> data;
        cin>>n;
        while(n--){
            cin>>temp;
            data.push(temp);
        }

        printf("Kasus #%d: ",i);

        while(!data.empty()){
            temp = data.top();
            data.pop();
            //cout<<temp;
            for(int j=0; j<temp.length(); j++){
                if(temp[j] == '0') cout<<"o";
                else if(temp[j] == '1') cout<<"i";
                else if(temp[j] == '2') cout<<"z";
                else if(temp[j] == '3') cout<<"e";
                else if(temp[j] == '4') cout<<"a";
                else if(temp[j] == '5') cout<<"s";
                else if(temp[j] == '6') cout<<"g";
                else if(temp[j] == '7') cout<<"t";
                else if(temp[j] == '8') cout<<"b";
                else if(temp[j] == '9') cout<<"q";
                else if(temp[j] >= 65 && temp[j] <= 90) printf("%c",temp[j]+32);
                else if(temp[j] >= 97 && temp[j] <= 122) cout<<temp[j];
            }

            if(data.size() != 0) printf(" ");
        }
        cout<<"\n";
    }

    return 0;
}
