#include <bits/stdc++.h>

using namespace std;

string kata;
vector <pair<int,char> > data;
vector <pair<int,char> >::iterator it;

bool cari(char a){
	int i;
	for(i=0;i<data.size();i++){
		if(data[i].second==a) break;
	}
	return i;
}

int main(){
	int bil;
	int sum=0;
	
	int huruf = 65;
	
	for(int i=1;i<=26;i++){
		scanf("%d",&bil);
		char c = huruf;
		data.push_back(make_pair(bil,c));
		huruf++;
	}
	
	sort(data.begin(),data.end());
	
//	for(int i=0;i<data.size();i++){
//		printf("%d  %c\n",data[i].first,data[i].second);
//	}
	
	cin>>kata;
	
	int j = kata.length()-1;
	for(int i=0;i<kata.length();i++){
		if(j<i) break;
		if(kata[i]=='?' && kata[j]=='?'){
			if(i!=j){
				sum += data[0].first;
				sum += data[0].first;
			}
			else sum += data[0].first;			
			kata[i]=kata[j]=data[0].second;
		}
		else if(kata[i]=='?' && kata[j]!='?'){
			kata[i] = kata[j];
			int pos = cari(kata[j]);
			sum += data[pos].first;
		}
		else if(kata[i]!='?' && kata[j]=='?'){
			kata[j] = kata[i];
			int pos = cari(kata[i]);
			sum += data[pos].first;
		}
		else if(kata[i]!=kata[j]){
			sum = -1;
			break;
		}
		j--;
	}
	
	if(sum!=-1)
		cout<<sum<<" "<<kata<<endl;
	else printf("%d\n",sum);
	return 0;
}
