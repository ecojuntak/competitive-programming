#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> away;
	queue<int> card;
	int n,t,temp;
	
	cin>>t;
	
	for(int i=1;i<=t;i++){
		cin>>n;
		
		for(int j=1;j<=n;j++){
			card.push(j);
		}
		
		printf("Case #%d:\n",i);
		
		while(card.size() > 1){
			temp = card.front(); card.pop();
			printf("%d",temp);
			temp = card.front(); card.pop();
			card.push(temp);
			if(card.size() > 1) printf(" ");
		}
		
		printf("\n%d\n",card.front());
		
		while(!card.empty()) card.pop();
		
		away.clear();
	}
	
	
	return 0;
}
