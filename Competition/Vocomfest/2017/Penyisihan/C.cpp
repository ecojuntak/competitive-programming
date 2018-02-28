#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,p,m,n,r,c;
	cin>>t;
	for(int i=0; i<t; i++){
		vector<string> data;
		string kata;
		cin>>p>>m>>n>>r>>c;

		for(int j=0; j<p; j++){
			cin>>kata;
			data.push_back(kata);
			for(int k=0; k<m-1; k++){
				cin>>kata;
			}
		}

		printf("Case #%d:\n",i+1);

		for(int j=0; j<r/m; j++){
			for(int k=0; k<m; k++){
				int t=0;
				for(int l=0; l<c; l++){
					cout<<data[t];
					l+=(n-1);
					t++;
					if(t==data.size()) t=0;
				}
				printf("\n");
			}
			string tes = data[0];
			data.erase(data.begin(),data.begin()+1);
			data.push_back(tes);
		}
	}


	return 0;
}





