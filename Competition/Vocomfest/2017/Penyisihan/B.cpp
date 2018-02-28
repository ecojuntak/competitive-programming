#include <bits/stdc++.h>

using namespace std;

map<string,string> silsilah;
map<string,string>::iterator it;

int main(){
    int  n,m;
    string bapak, anak, called;
    cin>>n>>m;

    for(int i=0;i<n-1;i++){
        cin>>anak>>bapak;
        silsilah[anak] = bapak;
    }

    for(int i=1;i<=m;i++){
        vector<string> bla;
        vector<string> call;
        string blangkon = "Blangkon";
        string blang_temp = blangkon;
        bool get = false;
        printf("Case #%d:\n", i);

        cin>>called;
        string cal_temp = called;
        call.push_back(cal_temp);
        while(true){
            it = silsilah.find(called);
            if(it != silsilah.end()){
                bapak = silsilah[called];
                called = bapak;
                call.push_back(bapak);
            }
            else break;
        }

        bla.push_back(blang_temp);
        while(true){
            it = silsilah.find(blangkon);
            if(it != silsilah.end()){
                bapak = silsilah[blangkon];
                blangkon = bapak;
                bla.push_back(bapak);
            }
            else break;
        }


        string lca;

        if(call.size() >= bla.size()){
           for(int j=0; j<call.size(); j++){
                if(get) break;
                for(int k=0; k<bla.size(); k++){
                    if(call[j] == bla[k]){
                        lca = call[k];
                        get = true;
                        break;
                    }
                }
           }
        }else{
            for(int j=0; j<bla.size(); j++){
                if(get) break;
                for(int k=0; k<call.size(); k++){
                    if(bla[j] == call[k]){
                        lca = call[k];
                        get = true;
                        break;
                    }
                }
           }
        }

        bool mulai = false;

        for(int j=bla.size()-1;j>=0;j--){
           if(bla[j] != lca && !mulai) continue;
           else{
                mulai = true;
                cout<<bla[j];
           }

           if(j!=0) printf("->");
        }

        printf("\n");
        mulai = false;
        for(int j=call.size()-1;j>=0;j--){
           if(call[j] != lca && !mulai) continue;
           else{
                mulai = true;
                cout<<call[j];
           }

           if(j!=0) printf("->");
        }

        if(i!=m)
            cout<<"\n\n";
        else
            cout<<"\n";
    }

    return 0;
}
