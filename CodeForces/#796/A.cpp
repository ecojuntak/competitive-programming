#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,x;

    cin>>n>>m>>x;

    vector<int> data(n+1);

    for(int i=1;i<=n;i++){
        cin>>data[i];
    }

    int temp=0;
    bool get = false;

    for(int i=1;i<=n;i++){
        if(i==m) continue;
        if(data[i] <= x && data[i] != 0){
            if(!get){
                get = true;
                temp = i;
            }else{
                if(abs(m-i) < abs(temp-m)){
                    temp = i;
                    //cout<<abs(temp-i)<<"  "<<abs(m-i)<<endl;
                }
            }
        }
    }
    //cout<<temp<<endl;
    cout<<abs(m-temp)*10<<endl;

    return 0;
}
