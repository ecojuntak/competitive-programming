#include <bits/stdc++.h>

typedef long long int lld;

using namespace std;


int main(){
	int n,x;

	cin>>n;

	vector<lld> data(n);
	lld can[n+5];

	for(int i=0;i<n;i++){
		cin>>data[i];
		can[i] = 1;
		if(data[i-1] < data[i])
            can[i] = can[i-1]+1;
	}

	for(int i=n-2;i>=0;i--){
		if(data[i] > data[i+1]){
            can[i] = max(can[i], can[i+1]+1);
		}
	}

	lld sum = 0;

	for(int i=0;i<n;i++){
        sum += can[i];
	}

	printf("%d\n",sum);

	return 0;
}
