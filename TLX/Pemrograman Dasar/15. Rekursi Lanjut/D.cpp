#include <bits/stdc++.h>

using namespace std;

int k,n;
vector<int> data;

void generateData(){
    for(int i=1; i<=k; i++)
        data.push_back(i);
}

void combination(int be){
    if(be+n >=k) return;

    while(be+n-2 < k){
        printf("%d ", data[be]);
        for(int i=be; i<be+n-1; i++){
            printf("%d", data[i]);
            if(i!=be+n-2) printf(" ");
        }
        printf("\n");
        //temp++;
    }

    combination(be+1);
}

int main(){
    cin>>k>>n;

    generateData();

    if(n==1){
        for(int i=0; i<data.size(); i++){
            cout<<data[i]<<endl;
        }
    }else combination(0);

    return 0;
}
