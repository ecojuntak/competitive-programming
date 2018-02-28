#include <bits/stdc++.h>

using namespace std;

int total(int n){
    int sum = 0;
    while(n--){
        sum+=n;
    }

    return sum;
}

int main()
{
	int t,n;

	cin>>t;

	for(int i=1; i<=t; i++){
        cin>>n;
        string kata;
        map<string, int> data;
        set<string> dataSet;
        set<string>::iterator it;
        int sum = 0;

        for(int i=0;i<n;i++){
            cin>>kata;

            sort(kata.begin(), kata.end());
            data[kata]++;
            dataSet.insert(kata);
        }

        for(it = dataSet.begin(); it!=dataSet.end(); it++){
            string temp = *it;
//            cout<<"data adalah "<<temp<<endl;
            int co = data[temp];
             sum += total(co);
        }

        printf("Kasus #%d: %d\n",i,sum);
	}
	return 0;
}
