#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, d, bil;

	cin>>n>>d;

	int data[n+5];
	int result[n+5];

	for(int i=0;i<n;i++){
		cin>>bil;
		data[i] = bil;
	}

	int res = d % n;

	int j=0;

	for(int i=res; i<n; i++){
		result[j] = data[i];
		j++;
	}	

	for(int i=0; i<n-(n-res); i++){
		result[j] = data[i];
		j++;
	}

	for(int i=0;i<n;i++){
		cout<<result[i];

		if(i!=n-1) cout<<" ";
	}

	cout<<endl;

	return 0;
}
