#include <bits/stdc++.h>

using namespace std;

void gas(int a, int b, int c){
    if(b-a > 2){
        return gas()
    }
}

int main()
{
	int t,n,bil;

	cin>>t;

	for(int i=1; i<=t; i++){
        cin>>n;
        vector<int> data;

        for(int j=0; j<n; j++){
            cin>>bil;
            data.push_back(bil);
        }

        sort(data.begin(), data.end());

        gas(0, n/3, (n/3)*2);
	}
	return 0;
}
